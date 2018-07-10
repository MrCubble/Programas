#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) && n)
    {
        int p_a = 0, p_b = 0;
        for(int i=0; i<n; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            if(a>b)
                p_a++;
            else if(b>a)
                p_b++;
        }
        printf("%d %d\n", p_a, p_b);
    }
}
