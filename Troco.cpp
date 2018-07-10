#include <iostream>
#include <string.h>
#define MAXN 100000
using namespace std;

int vetor[1000], numero, n, i;
bool sum[1000][MAXN], achou=false;

void troco(int pos, int soma)
{
    if(soma==numero)
    {
        achou = true;
        return;
    }
    if(soma>numero)
        return;
    if(n == pos)
        return;
    bool &res = sum[pos][soma];
    if(res)
        return;
    res = true;
    troco(pos + 1, soma + vetor[pos]);
    troco(pos + 1, soma);
}

int main()
{
    memset(sum, false, sizeof(sum));
    cin>>numero>>n;
    for(i=0; i<n; i++)
        cin>>vetor[i];
    troco(0,0);
    if(achou)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
}
