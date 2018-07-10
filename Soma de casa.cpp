#include <bits/stdc++.h>
#define MAXN 100010

int n, casa[MAXN];

int buscab(int esta)
{
    int ini = 0, fim = n;
    while(ini<=fim)
    {
        int meio = (ini+fim)/2;
        if(casa[meio]==esta) return esta;
        if(casa[meio]>esta) fim = meio - 1;
        if(casa[meio]<esta) ini = meio + 1;
    }
    return -1;
}

int main()
{
    int soma;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &casa[i]);
    scanf("%d", &soma);
    for(int i=0; i<n; i++)
    {
        int v = soma - casa[i];
        int x = buscab(v);
        if(x!=-1)
        {
            printf("%d %d", casa[i], x);
            return 0;
        }
    }
}
