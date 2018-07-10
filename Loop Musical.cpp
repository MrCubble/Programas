#include "bits/stdc++.h"
#define MAXN 10010

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) && n)
    {
        int vetor[MAXN];
        for(int i=0; i<n; i++)
            scanf("%d", &vetor[i]);
        int n_picos = 0;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                if((vetor[i]<vetor[i+1] && vetor[i]<vetor[n-1])||(vetor[i]>vetor[i+1] && vetor[i]>vetor[n-1]))
                    n_picos++;
            }
            else if(i==n-1)
            {
                if((vetor[i]<vetor[0] && vetor[i]<vetor[i-1])||(vetor[i]>vetor[0] && vetor[i]>vetor[i-1]))
                    n_picos++;
            }
            else
            {
                if((vetor[i]<vetor[i+1] && vetor[i]<vetor[i-1])||(vetor[i]>vetor[i+1] && vetor[i]>vetor[i-1]))
                    n_picos++;
            }
        }
        printf("%d\n", n_picos);
    }
}
