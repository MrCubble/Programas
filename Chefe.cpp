#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

#define MAXN 510
int n, m, menor, h;
int idades[MAXN], componente[MAXN];
vector <int> empregados[MAXN];

void troca(int a, int b)
{
    vector <int> auxi;
    auxi = empregados[a];
    empregados[a] = empregados[b];
    empregados[b] = auxi;
    for(int i=1; i<n+1; i++)
    {
        for(int j=0; j<(int)empregados[i].size(); j++)
        {
            if(empregados[i][j]==a)
                empregados[i][j] = b;
            else if(empregados[i][j] == b)
                empregados[i][j] = a;
        }
    }
}

void dfs(int x)
{
    for(int i=0; i<(int)empregados[x].size(); i++)
    {
        int v = empregados[x][i];
        if(componente[v]==-1)
        {
            if(idades[v]<menor)
                menor = idades[v];
            componente[v] = componente[x];
            dfs(v);
        }
    }
}

void resolve()
{
    for(int i=1; i<=n; i++)
    {
        cin>>idades[i];
        componente[i] = -1;
        empregados[i].clear();
    }
    for(int i=0; i<m; i++)
    {
        int a, b;
        cin>>a>>b;//Chefe empregado
        empregados[b].push_back(a);
    }
    for(int i=0; i<h; i++)
    {
        char a;
        cin>>a;
        if(a=='P')
        {
            for(int j=1; j<=n; j++)
                componente[j] = -1;
            menor = 200;
            int t;
            cin>>t;
            componente[t] = 0;
            dfs(t);
            if(menor == 200)
                cout<<"*"<<endl;
            else
                cout<<menor<<endl;
        }
        else
        {
            int x, y;
            cin>>x>>y;
            troca(x,y);
        }
    }
}

int main()
{
    while(cin>>n>>m>>h)//funcionários,relações entre eles e operações
    {
        resolve();
    }
    return 0;
}
