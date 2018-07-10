#include <bits/stdc++.h>
#define MAXN 1010

using namespace std;

int main()
{
    int n, m, movimentos;
    int fechaduras[MAXN];
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++)
        scanf("%d" , &fechaduras[i]);
    movimentos = 0;
    for(int i=0; i<n-1; i++)
    {
        int falta = m - fechaduras[i];
        fechaduras[i] += falta;
        fechaduras[i+1] +=falta;
        movimentos += abs(falta);
    }
    printf("%d\n", movimentos);
    return 0;
}
