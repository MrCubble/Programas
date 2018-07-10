#include "bits/stdc++.h"

using namespace std;

int kadane(vector <int> &V)
{
    int max_so_far = 0;
    int max_ending_here = 0;
    for(int i=0; i<(int)V.size(); i++)
    {
        max_ending_here = max_ending_here + V[i];
        if(max_ending_here < 0)
                max_ending_here = 0;
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main()
{
    int n, cp;
    vector <int> lp;
    while(scanf("%d", &n)!=EOF)
    {
        scanf("%d", &cp);
        for(int i=0; i<n; i++)
        {
            int aux;
            scanf("%d", &aux);
            lp.push_back(aux);
        }
        for(int i=0; i<n; i++)
            lp[i] = lp[i] - cp;
        int max_sum = kadane(lp);
        printf("%d\n", max_sum);
        lp.clear();
    }
    return 0;
}
