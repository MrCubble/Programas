#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

#define MAXN 10010
int componente[MAXN];
vector <int> filhos[MAXN];
vector <int> fami[MAXN];
int maior;

void dfs(int x, int parentesco)
{
    for(int i=0; i <(int)filhos[x].size(); i++)
    {
        int v = filhos[x][i];
        if(componente[v] == -1)
        {
            componente[v] = parentesco + 1;
            fami[parentesco + 1].push_back(v);
            maior = max(parentesco + 1, maior);
            dfs(v, parentesco + 1);
        }
    }
}


int main()
{
    int n, m;
    cin>>n>>m;
    for(int i = 1; i<n+1; i++)
    {
        int a;
        cin>>a;
        filhos[a].push_back(i);
    }
    for(int i=0; i<=n; i++)
        componente[i] = -1;
    componente[0] = 0;
    maior = -1;
    dfs(0, 0);
    int soma[MAXN];
    for(int i=1; i<=maior; i++)
        soma[i] = 0;
    for(int i=0; i<m; i++)
    {
        int a;
        cin>>a;
        soma[componente[a]]++;
    }
    for(int i=1; i<=maior; i++)
    {
        if(i!= maior)
            printf("%.2f ", (float)100*soma[i]/(float)fami[i].size());
        else
            printf("%.2f\n", (float)100*soma[i]/(float)fami[i].size());
    }
}
