#include "bits/stdc++.h"
#define MAXN 30

using namespace std;

unsigned long long dp[MAXN];

int tam = 2;

unsigned long long f(int x)
{
    if(x == 1 || x ==0)
        return 1;
    if(dp[x] != 0)
        return dp[x];
    for(int i=2; i<=x; i++)
    {
        dp[i] = i*f(i-1);
    }
    return dp[x];
}

int main()
{
    int n, m;
    memset(dp, 0, 100);
    while(scanf("%d %d", &n, &m)!=EOF)
    {
        unsigned long long x = f(n) + f(m);
        printf("%llu\n", x);
    }
    return 0;
}
