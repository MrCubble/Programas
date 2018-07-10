#include <iostream>
#include <vector>

using namespace std;

#define MAXN 50050
vector <int> familias[MAXN];
int componente[MAXN];

void dfs(int x)
{
    for(int i=0; i<(int)familias[x].size(); i++)
    {
        int v = familias[x][i];
        if(componente[v]==-1)
        {
            componente[v] = componente[x];
            dfs(v);
        }
    }
}

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        componente[i] = -1;
    for(int i=0; i<m; i++)
    {
        int a, b;
        cin>>a>>b;
        familias[a].push_back(b);
        familias[b].push_back(a);
    }
    int numero_componentes = 0;
    for(int i=1; i<=n; i++)
    {
        if(componente[i]==-1)
        {
            numero_componentes++;
            componente[i] = numero_componentes;
            dfs(i);
        }
    }
    cout<<numero_componentes<<endl;
    return 0;
}
