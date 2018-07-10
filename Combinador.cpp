#include "bits/stdc++.h"
#define MAXS 200

using namespace std;

void juntar(char a[], char b[])
{
    char r[MAXS];
    int x = strlen(a);
    int y = strlen(b);
    int ok = 1, i=0, k=0, j=0;
    while(j<x && k<y)
    {
        if(ok)
        {
            r[i] = a[j];
            i++;
            j++;
            ok = 0;
        }
        else
        {
            r[i] = b[k];
            i++;
            k++;
            ok = 1;
        }
    }
    while(j<x)
    {
        r[i] = a[j];
        j++;
        i++;
    }
    while(k<y)
    {
        r[i]=b[k];
        k++;;
        i++;
    }
    r[i] = '\0';
    printf("%s\n",r);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        char frase1[MAXS], frase2[MAXS];
        scanf(" %s", &frase1);
        scanf(" %s", &frase2);
        juntar(frase1, frase2);

    }
    return 0;
}
