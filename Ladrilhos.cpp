#include <iostream>
#include <set>

using namespace std;

#define MAXN 210
int h, l;
int mosaico[MAXN][MAXN];

void dfs(int i, int j, int cor, int *cont)
{
    mosaico[i][j] = -1;
    (*cont)++;
    if(i>0 && (mosaico[i-1][j] == cor))
        dfs(i-1, j, cor, cont);
    if(i<h && (mosaico[i+1][j] == cor))
        dfs(i+1, j, cor, cont);
    if(j>0 && (mosaico[i][j-1] == cor))
        dfs(i, j-1, cor, cont);
    if(j<l && (mosaico[i][j+1] == cor))
        dfs(i, j+1, cor, cont);
}

int main()
{
    cin>>h>>l;
    for(int i=0; i<h+1; i++)
    {
        for(int j=0; j<l+1; j++)
            mosaico[i][j] = -1;
    }
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<l; j++)
            cin>>mosaico[i][j];
    }
    int cont, menor = 50010;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<l; j++)
        {
            if(mosaico[i][j]!=-1)
            {
                cont = 0;
                dfs(i, j, mosaico[i][j], &cont);
                if(cont < menor)
                    menor = cont;
            }
        }
    }
    cout<<menor<<endl;
    return 0;
}
