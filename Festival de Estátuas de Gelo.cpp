#include "bits/stdc++.h"

using namespace std;

int minCoins(int coins[], int m, int V)
{
    int table[V+1];
    table[0] = 0;
    for(int i=1; i<=V; i++)
        table[i] = INT_MAX;
    for(int i=1; i<=V; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(coins[j]<=i)
            {
                int sub_res = table[i - coins[j]];
                if(sub_res != INT_MAX && sub_res + 1 < table[i])
                    table[i] = sub_res + 1;
            }
        }
    }
    return table[V];
}

int main()
{
    int x, n, v;
    scanf("%d", &x);
    for(int q=0; q<x; q++)
    {
        int coins[35], ok = 1;
        scanf("%d %d", &n, &v);
        for(int i=0; i<n; i++)
        {
            scanf("%d", &coins[i]);
            if(coins[i] == 1)
                ok = 0;
        }
        if(ok)
            coins[n++] = 1;
        int menor = minCoins(coins, n, v);
        printf("%d\n", menor);
    }
    return 0;
}
