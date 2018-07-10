#include "bits/stdc++.h"
#define MAXS 1010

using namespace std;

int main()
{
    char f[MAXS];
    int q, n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        stack <char> d;
        scanf("%s", &f);
        q = 0;
        for(int j=0; j<strlen(f); j++)
        {
            if(f[j] == '<')
                d.push(f[j]);
            else if(f[j] == '>')
            {
                if(!d.empty() && d.top() == '<')
                {
                    d.pop();
                    q++;
                }
            }
        }
        printf("%d\n", q);
    }
    return 0;
}
