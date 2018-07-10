#include <iostream>
#include <algorithm>

#define MAXN 100000

//Vari�vel
int d;
//C�digo
int divisao(int a, int b)
{
    if(a%d==b%d)
        return a>b;
    return a%d>b%d;
}
using namespace std;

int main()
{
    //Vari�veis
    int n, i, v[MAXN];
    //C�digo
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
