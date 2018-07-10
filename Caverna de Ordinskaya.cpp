#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, atu, ant=0, resp=0, ok = 1;
    scanf("%lld %lld", &n, &m);
    for(int i=0; i<n; i++)
    {
        scanf("%lld", &atu);
        long long int x = min(atu, abs(atu - m)), y = max(atu, abs(atu - m));
        if(x>=ant)
        {
            resp += x;
            ant = x;
        }
        else if(y>=ant)
        {
            resp += y;
            ant = y;
        }
        else
        {
            ok = 0;
        }
    }
    printf("%lld\n",ok? resp:-1);
    return 0;
}
