#include <iostream>
#include <vector>

using namespace std;

void dfs(int x)
{
    for(int i=0; i<(int)vizinhos[x].size(); i++)
    {
        int u = vizinhos[x][i];
        if(componente[u]==-1)//checo se não foi visitado
        {
            componentes[u] = componentes[x];
            dfs(u);
        }
    }
}

void bfs(int x)
{
    queue <int> fila;
    fila.push(x);
    componente[x] = valor;
    int atual = 0;
    while(!fila.empty())
    {
        int v = fila.front();
        fila.pop();
        for(int i=0; i<(int)vizinhos.size(); i++)
        {
            int u = vizinhos[v][i];
            if(componente[u]==-1)
            {
                componente[u] = componente[v];
                fila.push(u);
            }
        }
    }
}

int main()
{

}
