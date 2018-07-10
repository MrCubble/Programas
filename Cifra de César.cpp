#include "bits/stdc++.h"
#define MAXS 60

using namespace std;

void cesar(char frase[], int c)
{
    int n = strlen(frase);
    for(int i=0; i<n; i++)
    {
        int letra = frase[i] - 'A';
        letra -= c;
        if(letra<0)
            letra = 26 + letra;
        frase[i] = 'A' + letra;
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        char frase[MAXS];
        int c;
        scanf("%s", &frase);
        scanf("%d", &c);
        cesar(frase, c);
        printf("%s\n", frase);
    }
    return 0;
}
