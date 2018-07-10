#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int a, b, c;
        scanf("%d %d", &a, &b);
        c = (a*b)/2;
        printf("%d cm2\n", c);
    }
}
