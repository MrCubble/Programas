#include <cstdio>
#include <cmath>

//Vari�veis Globais
double maior, atual;
//C�digo
int main()
{
    //Vari�veis
    int a, b, i ,N, t;
    //C�digo
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
