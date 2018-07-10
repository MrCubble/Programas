#include <iostream>
#include <cstdio>

int main ()
{
    int a, b, c, d, i;
    while(scanf("%d%d%d%d", &a, &b, &c, &d) && a!=0 && b!=0 && c!=0 && d!=0)
    {
        int x=a, y=b;
        for(i=0; ; i++)
        {
            if(a==c && b==d)
            {
               printf("0\n");
               break;
            }
            if(((x-i)==c && (y-i)==d) || (x==c && (y-i)==d) || ((x+i)==c && (y-i)==d) || ((x+i)==c && y==d))
            {
                printf("1\n");
                break;
            }
            if(((x+i)==c && (y+i)==d) || (x==c && (y+i)==d) || ((x-i)==c && (y+i)==d) || ((x-i)==c && y==d))
            {
                printf("1\n");
                break;
            }
            if(x-i<1 && x+i>8 && y-i<1 && y+i>8)
            {
                printf("2\n");
                break;
            }
        }
    }
    return 0;
}
