#include <cstdio>

int main()
{
    //Variáveis
    int ordem, i, j, matriz1[100][100], matriz2[100][100];
    //Código
    scanf("%d", &ordem);
    for(i=0; i<ordem; i++)
        for(j=0; j<ordem;j++)
            scanf("%d", &matriz1[i][j]);
    for(i=0; i<ordem; i++)
        for(j=0; j<ordem;j++)
            scanf("%d", &matriz2[i][j]);
    for(i=0; i<ordem; i++)
        for(j=0; j<ordem;j++)
        {
            if(j<ordem-1)
                printf("%d ", (matriz1[i][j]+matriz2[i][j]));
            else
                printf("%d\n",(matriz1[i][j]+matriz2[i][j]));
        }
}
