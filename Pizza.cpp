#include "bits/stdc++.h"

using namespace std;

int kadane(vector <int> V)
{
    int m=0, n=0;
    for(int i=0; i<(int)V.size() ; i++)
    {
        n = max(0, n + V[i]);
        if(m<n)
            m = n;
    }
    return m;
}

int maxCircularSum(vector <int> V)
{
    int maxKadane = kadane(V);
    int max_wrap =0;
    for(int i=0; i<(int)V.size(); i++)
    {
        max_wrap += V[i];
        V[i] = - V[i];
    }
    max_wrap = max_wrap + kadane(V);
    return (max_wrap>maxKadane)? max_wrap: maxKadane;
}

int main()
{
    int n;
    scanf("%d", &n);
    vector <int> f;//fatias
    for(int i=0; i<n; i++)
    {
        int aux;
        scanf("%d", &aux);
        f.push_back(aux);
    }
    int maior = maxCircularSum(f);
    printf("%d\n", maior);
}
