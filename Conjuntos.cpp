#include<iostream>
#include<algorithm>

using namespace std;

long long union(long long a, long long b)
{
    return (a|b);
}

long long union(long long a, long long b)
{
    return (a&b);
}

int a[10000][70][70];

int main()
{
    int t,n,m,q,b,o,c1,c2;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin>>m;
            for(int k=0; k<m; k++)
            {
                cin>>b;
                a[i][j][b]=1;
            }
        }
        cin>>q;
        for(int j=0; j<q; j++)
        {
            cin>>o>>c1>>c2;
            int soma = 0;
            if (o==1)
            {
                for(int k=0; k<61; k++)
                {
                    if(a[i][c1-1][k]==1 && a[i][c2-1][k]==1)
                      soma++;
                }
                cout<<soma<<endl;
            }
            else
            {
                for(int k=0; k<61; k++)
                {
                    if(a[i][c1-1][k]==1 || a[i][c2-1][k]==1)
                      soma++;
                }
                cout<<soma<<endl;
            }
        }
    }
}
