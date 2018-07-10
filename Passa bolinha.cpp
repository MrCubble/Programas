#include <iostream>

using namespace std;
//Variáveis Globais
int matriz[105][105], levantada[105][105], ordem, linha, coluna, resposta = 0;

int vec [][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};

int passa_bolinha(int x_atual, int y_atual)
{
    levantada[x_atual][y_atual] = 1;
    int k;
    for(k=0; k<4; k++)
    {
        int novo_x = x_atual + vec[k][0], novo_y = y_atual + vec[k][1];
        if(levantada[novo_x][novo_y]==0&&matriz[x_atual][y_atual]<=matriz[novo_x][novo_y])
            passa_bolinha(novo_x,novo_y);
    }
    resposta++;
}

int main()
{
    //Variáveis
    int i, j;
    //Código
    cin>>ordem>>linha>>coluna;
    for(i=0; i<=ordem+1; i++)
        for(j=0; j<=ordem+1; j++)
            levantada[i][j] = (i==0||j==0||j==ordem+1||i==ordem +1);
    for(i=0; i<ordem*ordem; i++)
        cin>>matriz[i/ordem + 1][i%ordem + 1];
    passa_bolinha(linha,coluna);
    cout<<resposta<<endl;
}
