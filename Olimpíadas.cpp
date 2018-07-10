#include <iostream>
#include <algorithm>

using namespace std;

struct Medalhas
{
    int pais;
    int o;
    int p;
    int b;
};

bool comparaMedalhas(Medalhas a, Medalhas b){
    if(a.o == b.o && a.p == b.p && a.b == b.b)
        return a.pais < b.pais;

    if(a.o == b.o && a.p == b.p)
        return a.b > b.b;

    if(a.o == b.o)
        return a.p > b.p;

    return a.o > b.o;
}

int main()
{
    int numero, modalidade, x, y, z;
    Medalhas paises[1000];
    cin>>numero>>modalidade;
    for(int i=0; i<numero; i++)
    {
        paises[i].pais = i + 1;
        paises[i].o =0;
        paises[i].p =0;
        paises[i].b =0;
    }
    for(int i=0; i<modalidade; i++)
    {
        cin>>x>>y>>z;
        paises[x - 1].o++;
        paises[y - 1].p++;
        paises[z - 1].b++;
    }
    sort(paises, paises + numero, comparaMedalhas);
    for(int i=0; i<numero; i++)
        cout<<paises[i].pais<<" ";
    cout<<endl;
}
