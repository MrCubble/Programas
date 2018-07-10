#include "bits/stdc++.h"

using namespace std;

int kadane(vector <int> &V)
{
    int max_so_far = 0;
    int max_ending_here =0;
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
    int n;
    scanf("%d", &n);
    vector <int> s;//salas
    for(int i=0; i<n; i++)
    {
        int aux;
        scanf("%d", &aux);
        s.push_back(aux);
    }
    int max_sub = kadane(s);
    printf("%d\n", max_sub);
}
