#include <cstdio>

int main()
{
    //Variáveis
    int ordem, i, j, matriz[10][10], soma, soma_anterior;
    bool magico;
    //Código
    scanf("%d", &ordem);
    for(i=0; i<ordem; i++)
        for(j=0; j<ordem;j++)
            scanf("%d", &matriz[i][j]);
    magico = true;
    soma = 0;
    soma_anterior = 0;
    for(i=0; i<ordem; i++)
    {
        for(j=0; j<ordem;j++)
        {
            soma += matriz[i][j];
            if(((j == ordem - 1)))
            {
                if((soma == soma_anterior) || soma_anterior==0)
                {
                    soma_anterior = soma;
                    soma = 0;
                }
                else
                {
                    magico = false;
                }
            }

        }
    }
    for(i=0; i<ordem; i++)
    {
        for(j=0; j<ordem;j++)
        {
            soma += matriz[j][i];
            if(((j == ordem - 1)))
            {
                if((soma == soma_anterior))
                {
                    soma_anterior = soma;
                    soma = 0;
                }
                else
                {
                    magico = false;
                }
            }

        }
    }
    for(i=0, j=0; i<ordem; i++, j++)
    {
        soma += matriz[i][j];
        if(((j == ordem - 1)))
        {
            if((soma == soma_anterior) || soma_anterior==0)
            {
                soma_anterior = soma;
                soma = 0;
            }
            else
            {
                magico = false;
            }
        }
    }
    for(i=0, j=1; i<ordem; i++, j++)
    {
        soma += matriz[i][ordem-j];
        if(((i == ordem-1)))
        {
            if((soma == soma_anterior) || soma_anterior==0)
            {
                soma_anterior = soma;
                soma = 0;
            }
            else
            {
                magico = false;
            }
        }
    }
    if(magico)
        printf("%d\n", soma_anterior);
    else
        printf("-1\n");
}
