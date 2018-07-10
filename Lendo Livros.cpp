#include "bits/stdc++.h"

using namespace std;

int main()
{
    double q, d, p;
    while(scanf("%lf", &q) && q)
    {
        scanf("%lf %lf", &d, &p);
        double x = d*p;
        double y = x*q/(p-q);
        int resp = floor(y);
        printf("%d pagina%s", resp, (resp>1)?"s\n":"\n");
    }
    return 0;
}
