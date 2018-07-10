#include "bits/stdc++.h"

using namespace std;

#define MAXN 10
#define MAXS 5500

int s, notas[MAXN], valor[MAXN]={0, 2, 5, 10, 20, 50, 100, 0, 0, 0};
long long int tab[MAXS][MAXN];

long long int dp(int resta, int tipo=1)
{
    if(!resta)
        return 1LL;
    if(tipo>6 || resta<0)
        return 0LL;
    if(tab[resta][tipo]>=0)
        return tab[resta][tipo];
    long long int total = 0LL;
    for(int i=0; i<=notas[tipo]; i++)
    {
        if(resta<i*valor[tipo])break;
        total += dp(resta-i*valor[tipo], tipo+1);
    }
    return tab[resta][tipo] = total;
}

int main()
{
    scanf("%d", &s);
    for(int i=1; i<7; i++) scanf("%d", &notas[i]);
    memset(tab, -1, sizeof(tab));
    printf("%lld\n", dp(s));
    return 0;
}
