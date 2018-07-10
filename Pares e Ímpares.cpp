#include "bits/stdc++.h"
#define MAXN 100010

using namespace std;

bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
    int n;
    vector <int> u, v;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        if(x%2 == 0)
            u.push_back(x);
        else
            v.push_back(x);
    }
    sort(u.begin(), u.end());
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<(int)u.size(); i++)
        printf("%d\n", u[i]);
    for(int i=0; i<(int)v.size(); i++)
        printf("%d\n", v[i]);
    return 0;
}
