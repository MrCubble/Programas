#include "bits/stdc++.h"
#define fr(i,n) for(int i=0; i<n; i++)

using namespace std;

int main()
{
    int p1[5], p2[5], n=5, ok = 1;
    fr(i,n)
        scanf("%d", &p1[i]);
    fr(i,n)
        scanf("%d", &p2[i]);
    fr(i,n)
    {
        if(p1[i]==p2[i])
            ok = 0;
    }
    printf("%c\n", ok?'Y':'N');
    return 0;
}
