#include <iostream>
#include <algorithm>
#define MAXN 120

using namespace std;

struct Piloto
{
    int corredor;
    int pontuacao;
};

bool comparaPiloto(Piloto a, Piloto b)
{
    if(a.pontuacao == b.pontuacao)
        return a.corredor<b.corredor;

    return a.pontuacao > b.pontuacao;
}

bool comparaCorredor(Piloto a, Piloto b)
{
    return a.corredor < b.corredor;
}

int main()
{

    int corridas, numero, sistemas, v[MAXN], volta[MAXN][MAXN], quantidade, i, j, k, kl, p;
    cin>>corridas>>numero;
    while(corridas!=0&&numero!=0)
    {
        for( i=0; i<corridas; i++)
        {
            for( j=0; j<numero; j++)
            {
                v[j] = 0;
                cin>>volta[i][j];
            }
        }
        cin>>sistemas;
        for(i=0; i<sistemas; i++)
        {
            Piloto piloto[MAXN];
            for(j=0; j<numero; j++)
            {
                piloto[j].corredor = j + 1;
                piloto[j].pontuacao =0;
            }
            cin>>quantidade;
            for(j=0; j<100; j++)v[j]=0;
            for( j=0; j<quantidade; j++)
            {
                cin>>v[j];
            }
            for( k=0; k<numero; k++)
            {
                for( p=0; p<corridas; p++)
                {
                    piloto[k].pontuacao += v[volta[p][k]-1];
                }
            }
            sort(piloto, piloto + numero, comparaPiloto);
            cout<<piloto[0].corredor;
            kl= 1;
            while(piloto[0].pontuacao == piloto[kl].pontuacao && kl<numero)
            {
                cout<<" "<<piloto[kl++].corredor;
            }
            cout<<'\n';
        }
        cin>>corridas>>numero;
    }
}
