#include "bits/stdc++.h"
#define MAXN 10000

using namespace std;

int dp[MAXN], last=2;

int Iccanobif(int x)
{
    if(x==1 || x==0)
        return 1;
    if(dp[x])
        return dp[x];
    for(int i=2; i<=x; i++)
    {
        dp[i] = Iccanobif(i-1) + Iccanobif(i-2);
        last++;
    }
    return dp[x];
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=n-1; i>=0; i--)
        printf("%d%c",Iccanobif(i),(i==0)?'\n':' ');
}
