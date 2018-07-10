#include <bits/stdc++.h>
#define MAXN 100010

int f[MAXN], p[MAXN], o[MAXN];
int n, m;

int buscab(int b)
{
    int ini = 0, fim = n;
    while(fim-ini>1)
    {
       int meio = (ini+fim)/2;
       if(f[meio]<=b)
           ini = meio;
       else
       {
            fim = meio;
       }
    }
    return p[fim-1];
}

int main()
{
    int i;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n-1; i++) scanf("%d", &f[i+1]);
    for(int i=0; i<n; i++)scanf("%d", &p[i]);
    for(int i=0; i<m; i++) scanf("%d", &o[i]);
    for(int i=0; i<m; i++)
    {
        if(i!=m-1)
        {
            printf("%d ", buscab(o[i]));
        }
        else
        {
            printf("%d\n", buscab(o[i]));
        }
    }
}
