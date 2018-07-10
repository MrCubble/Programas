#include <bits/stdc++.h>
#define MAXN 1010

using namespace std;

struct caixa
{
    int W;
    int C;
};

int best[MAXN];
caixa caixas[MAXN];

bool cmp(caixa a, caixa b)
{
    return (a.C + a.W) < (b.C + b.W);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int c;
        scanf("%d %d", &caixas[i].W, &c);
        caixas[i].C = c - caixas[i].W;
    }
    sort(caixas, caixas + n, cmp);
    for(int i=0; i<=n; i++)
        best[i] = 1000000047;
    best[0] = 0;
    int maxcount = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=maxcount+1; j>0; j--)
        {
            if(caixas[i].C >=best[j-1] && best[j-1] + caixas[i].W<best[j])
            {
                best[j] = best[j-1] + caixas[i].W;
                if(j>maxcount) maxcount=j;
            }
        }
    }
    printf("%d\n", maxcount);
}
