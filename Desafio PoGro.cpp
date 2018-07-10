#include <bits/stdc++.h>
#define EPS 1e-4
using namespace std;
double a, b, c, xc, yc, xf;

double func(double x)
{
    double resp = 2*(x-xc) + 2*(-2*a*x - b)*(-a*pow(x,2)-b*x+c-yc);
    return resp;
}
double dist(double x,double y, double x2,double y2){
    return hypot(x-x2,y-y2);
}
int buscab()
{
    double ini=0,fim=xf;
    while(ini<=fim){
        double meio=(ini+fim)/2;
        double val=func(meio);
        if(fabs(val)<EPS) return val;n
        else if(val<EPS)ini=meio+EPS;
        else fim=meio-EPS;
    }
    return -1.0;
}

int main()
{
    while(scanf("%f %f %f", &a, &b, &c)!=EOF)
    {
        scanf("%f %f", &xc, &yc);
        scanf("%f", &xf);
        double x=buscab();
        double y=(x*x/a)+x/b+c;
        printf("%.2f\n", dist(x,y,xc,yc));
    }
}

