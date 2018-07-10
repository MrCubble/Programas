#include <iostream>

using namespace std;

#define MAXN 300
int n, m;
char cidade[MAXN][MAXN];

void dfs(int i, int j)
{
    if(i>0 && (cidade[i-1][j]=='A'))
    {
        cidade[i-1][j]= 'T';
        dfs(i-1, j);
    }
    if(i<n && (cidade[i+1][j]=='A'))
    {
        cidade[i+1][j]= 'T';
        dfs(i+1, j);
    }
    if(j>0 && (cidade[i][j-1]=='A'))
    {
        cidade[i][j-1]= 'T';
        dfs(i, j-1);
    }
    if(j<m && (cidade[i][j+1]=='A'))
    {
        cidade[i][j+1]= 'T';
        dfs(i, j+1);
    }
}
void resolve()
{
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<m+1; j++)
            cidade[i][j] = 'X';
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>cidade[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(cidade[i][j] == 'T')
            {
                dfs(i, j);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(j!=m-1)
                cout<<cidade[i][j];
            else
                cout<<cidade[i][j]<<endl;
        }
    }
}
int main()
{
    while(cin>>n>>m&&n&&m)
    {
        resolve();
        cout<<endl;
    }
    return 0;
}
