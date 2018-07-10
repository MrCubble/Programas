#include <iostream>
#include <algorithm>

#define INF 1000000000
#define MAXN 1000

using namespace std;

int tabu[MAXN][MAXN],linha[MAXN], coluna[MAXN];


int main()
{
    //Variáveis
    int i, n,maior ,resposta;
    //Código
    cin>>n;
    for(i=0; i<n*n; i++)
    {
        cin>>tabu[i/n][i%n];
        linha[i/n] += tabu[i/n][i%n];
        coluna[i%n] += tabu[i/n][i%n];
    }
    maior = -INF;
    for(i=0; i<n*n; i++)
    {
        maior = max(maior,linha[i/n] + coluna[i%n] - 2*tabu[i/n][i%n]);
    }
    resposta = maior;
    cout<<resposta<<endl;
}
