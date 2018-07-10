#include <iostream>
#include <algorithm>

#define MAXN 100
using namespace std;

int v[MAXN], t[MAXN];

int main()
{
    //Variável
    int n, m, i, j, a;
    //Código
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a;
            v[i] +=a;
            t[i] +=a;
        }
    }
    sort(v,v+n);
    for(j=0; j<3; j++)
    {
        for(i=0; i<n; i++)
        {
            if(v[j]==t[i])
            {
                cout<<i+1<<endl;
                i = n;
            }
        }
    }
}
