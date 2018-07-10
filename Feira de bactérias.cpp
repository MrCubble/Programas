#include <cstdio>
#include <cmath>

//Variáveis Globais
double maior, atual;
//Código
int main()
{
    //Variáveis
    int a, b, i ,N, t;
    //Código
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        scanf("%d %d", &a, &b);
        atual = log(a)*b;
        if(maior<atual)
        {
            t = i;
            maior = atual;
        }
    }
    printf("%d\n", t);
}
