#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char a[15], b[15], c[35];

int main()
{
    /*Variables*/


    int w, x, y, z, t = 0, h = 0, p = 0;

    /*Code*/

    while(cin>>a)
    {
        cin>>c;
        y = strlen(c);
        z = strlen(a);
        for(x = 0; x<y; x++)
        {
            for(w = 0; w<z; w++)
            {
                b[w] = c[w+x];
            }
            if(strcmp(a,b)==0)
            {
                t++;
                h = x + 1;
            }
        }
        p++;
        if( t == 0)
            cout<<"Caso #"<<p<<":"<<endl<<"Nao existe subsequencia"<<endl<<endl;
        else
            cout<<"Caso #"<<p<<":"<<endl<<"Qtd.Subsequencias: "<<t<<endl<<"Pos: "<<h<<endl<<endl;
        t = 0;
        for(x = 0; x<15; x++)
            b[x] = (char) 0;
    }
}

