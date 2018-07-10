#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n)&&n)
    {
        for(int i=0; i<n; i++)
        {
            int marca = 0, ok=1;
            for(int i=1; i<=5; i++)
            {
                int a;
                scanf("%d", &a);
                if(a<=127)
                {
                    if(marca)
                        ok = 0;
                    marca+=i;
                }
            }
            if(!marca)
                ok = 0;
            printf("%c\n",ok?'A'+marca-1:'*');
        }
    }
    return 0;
}
