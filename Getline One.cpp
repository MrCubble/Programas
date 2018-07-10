#include <iostream>
#include <string.h>
#include <cstdio>

using namespace std;

int main()
{
    char nome[100];
    double d=0, dt=0, q=0;
    while(gets(nome))
    {
        scanf(" %lf", &d);
        dt+=d;
        q++;
    }
    printf("%.1lf\n", dt/q);
}
