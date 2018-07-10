#include <iostream>
#include <vector>

using namespace std;

#define MAXN 5010
int n, m;
int componente[MAXN];
vector <int> amigos[MAXN];

void dfs(int x)
{
    for(int i=0; i<(int)amigos[x].size(); i++)
    {
        int v = amigos[x][i];
        if(componente[v]==-1)
        {
            componente[v] = componente[x];
            dfs(v);
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++) componente[i] = -1;
    for(int i=0; i<m; i++)
    {
        int a, b;
        cin>>a>>b;
        amigos[a].push_back(b);
        amigos[b].push_back(a);
    }
    int times = 0;
    for(int i=1; i<=n; i++)
    {
        if(componente[i] == -1)
        {
            times++;
            componente[i] = times;
            dfs(i);
        }
    }
    cout<<times<<endl;
    return 0;
}
