#include <bits/stdc++.h>
#define MAXN 1010

using namespace std;

long long int f[MAXN], a[MAXN];
int n, k, m;

long long int f_x(int x)
{
    if(f[x] != -1)
        return f[x];
    long long int soma = 0;
    for(int i=1; i<=n; i++)
    {
        soma += a[i]*f_x(x-i);
    }
    f[x] = soma%m;
    return f[x];
}

int main()
{
    scanf("%d %d %d", &n, &k, &m);
    for(int i=1; i<=k; i++) f[i] = -1;
    for(int i=1; i<=n; i++) scanf("%lld", &a[i]);
    for(int i=1; i<=n; i++) scanf("%lld", &f[i]);
    long long int resposta = f_x(k)%m;
    printf("%lld\n", resposta);
    return 0;
}
