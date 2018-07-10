#include <iostream>
#include <vector>

#define MAXN 100100

using namespace std;

vector <int> matriz[MAXN];

int main()
{
    int n, m, i, t, a, b, j;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>t>>a>>b;
        if(t==1)
        {
            matriz[a].push_back(b);
            matriz[b].push_back(a);
        }
        else
        {
            for(j=0; j<matriz[a].size();j++)
            {
                if(b == matriz[a][j])
                    break;
            }
            if(j==matriz[a].size())
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
    }
}
