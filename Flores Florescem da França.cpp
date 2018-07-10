#include "bits/stdc++.h"
#define MAXN 1050

using namespace std;

int main()
{
    while(1)
    {
        char a = ' ', frase[MAXN];
        scanf(" %[^\n]", &frase);
        for(int i=0; a == ' '; i++)
            a = frase[i];
        if(a=='*')
            break;
        int ok =1;
        char top = toupper(a);
        for(int i=0; i<strlen(frase); i++)
        {
            if(frase[i]==' ' && top!=toupper(frase[i+1]) && top!=frase[i+1])
                ok = 0;
        }
        printf("%c\n",ok?'Y':'N');
    }
    return 0;
}
