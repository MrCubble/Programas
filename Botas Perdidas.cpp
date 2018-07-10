#include "bits/stdc++.h"
#define MAXN 70

using namespace std;

struct sapatos{
    int d;
    int e;
};

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        sapatos s[MAXN];
        for(int i=30; i<=60; i++)
        {
            s[i].d = 0;
            s[i].e = 0;
        }
        for(int i=0; i<n; i++)
        {
            int x;
            char y;
            scanf("%d %c", &x, &y);
            if(y == 'D')
                s[x].d++;
            else
                s[x].e++;
            //printf("%d %d\n", s[x].d, s[x].e);
        }
        int pares = 0;
        for(int i=30; i<=60; i++)
            pares += min(s[i].e,s[i].d);
        printf("%d\n", pares);
    }
    return 0;
}
