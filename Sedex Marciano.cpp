#include <cstdio>
#include <cmath>

int main()
{
    //Vari�veis
    double largura, altura, profundidade, raio, d1, d2;
    //C�digo
    scanf("%lf %lf %lf %lf", &largura, &altura, &profundidade, &raio);
    d1 = sqrt(pow(largura,2) + pow(profundidade,2));
    d2 = sqrt(pow(d1,2) + pow(altura,2));
    if(2*raio < d2)
        printf("N\n");
    else
        printf("S\n");
}
