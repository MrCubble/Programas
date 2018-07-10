#include <bits/stdc++.h>
#include <math.h>

int main()
{
    double r1, x1, y1, r2, x2, y2;
    while(scanf("%lf %lf %lf %lf %lf %lf", &r1, &x1, &y1, &r2, &x2, &y2)!=EOF)
    {
        double d =sqrt(pow(x1-x2, 2)+ pow(y1-y2, 2));
        if(r1>=r2+d) printf("RICO\n");
        else printf("MORTO\n");
    }
    return 0;
}
