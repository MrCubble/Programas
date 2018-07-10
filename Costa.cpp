#include <iostream>
#include <string.h>

#define MAXN 1010
using namespace std;

int main()
{
    int m, n, i, j, soma;
    char matriz[MAXN][MAXN];
    memset(matriz,'.', sizeof(matriz));
    cin>>m>>n;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>matriz[i][j];
        }
    }
    soma = 0;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            soma += ((matriz[i-1][j]=='.'|| matriz[i][j-1]=='.'|| matriz[i+1][j]=='.'|| matriz[i][j+1]=='.')&&matriz[i][j]=='#');
        }
    }
    cout<<soma<<endl;
}
