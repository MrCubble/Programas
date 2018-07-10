#include <bits/stdc++.h>
#define INF 10010

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) && n)
    {
        int atual, maior_1 = -INF, maior_2= -INF, i1, i2;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &atual);
            if(atual>maior_1)
            {
                maior_2 = maior_1;
                maior_1 = atual;
                i2 = i1;
                i1 = i;
            }
            else if(atual>maior_2)
            {
                maior_2 = atual;
                i2 = i;
            }
        }
        printf("%d\n", i2+1);
    }
    return 0;
}
