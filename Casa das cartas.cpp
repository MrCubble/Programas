#include <iostream>
#include <algorithm>

#define MAXN 100000

//Variável
int d;
//Código
int divisao(int a, int b)
{
    if(a%d==b%d)
        return a>b;
    return a%d>b%d;
}
using namespace std;

int main()
{
    //Variáveis
    int n, i, v[MAXN];
    //Código
    cin>>n>>d;
    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v,v+n,divisao);
    for(i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
