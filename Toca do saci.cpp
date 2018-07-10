#include <iostream>
#define MAXN 1010

using namespace std;

int toca[MAXN][MAXN];

int main()
{
    int n, m, dx, dy;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            toca[i][j] = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>toca[i][j];
            if(toca[i][j]==3)
            {
                dx = i;
                dy = j;
            }
        }
    }
    int cont=1;
    while(toca[dx][dy]!=2)
    {
        if((dx-1>-1)&&(toca[dx-1][dy]==1||toca[dx-1][dy]==2))
        {
            toca[dx][dy] = 4;
            dx--;
            cont++;
        }
        else if((dy-1>-1)&&(toca[dx][dy-1]==1||toca[dx][dy-1]==2))
        {
            toca[dx][dy] = 4;
            dy--;
            cont++;
        }
        else if((dx+1<n)&&(toca[dx+1][dy]==1||toca[dx+1][dy]==2))
        {
            toca[dx][dy] = 4;
            dx++;
            cont++;
        }
        else if((dy+1<m)&&(toca[dx][dy+1]==1||toca[dx][dy+1]==2))
        {
            toca[dx][dy] = 4;
            dy++;
            cont++;
        }
    }
    cout<<cont<<endl;
}
