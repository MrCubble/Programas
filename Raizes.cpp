#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    //Vari�veis
    double numeros[10010];
    int quantidade, i;
    //C�digo
    cin>>quantidade;
    for(i=0; i<quantidade; i++)
    {
        cin>>numeros[i];
        numeros[i] = sqrt(numeros[i]);
    }
    for(i=0; i<quantidade; i++)
    {
        printf("%.4lf\n", numeros[i]);
    }
}
