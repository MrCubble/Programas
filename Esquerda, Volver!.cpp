#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) && n)
    {
        char dir[4] = {'N','O','S','L'};
        int x = 0;
        for(int i=0; i<n; i++)
        {
            char a;
            scanf(" %c", &a);
            if(a == 'D')
                x--;
            else
                x++;
            if(x<0)
                x = 3;
            else if(x>3)
                x = 0;

        }
        printf("%c\n", dir[x]);
    }
}
