#include <iostream>
#define MAXN 10005

using namespace std;

int vetor[MAXN];

void elimina(int comeco, int fim)
{
    int i=0;
    for (i=comeco; i<=fim; i++)
        vetor[i] = vetor[i+1];
}

int josephus(int tamanho, int passo)
{
        int i;
        for(i=0; i<tamanho; i++)
        {
            vetor[i] = i + 1;
        }
        i = 0;
        while(tamanho>1)
        {
            elimina(i, tamanho--);
            i +=passo;
            if(i%tamanho==0)
                i = tamanho - 1;
            else if(i>tamanho)
                i = i%tamanho - 1;
            else
                i = i - 1;
        }
        return vetor[0];
}

int main()
{
    int n, i=1;
    while(cin>>n&&n)
    {
        i = 1;
        while(josephus(n,i)!=13)
        {
            i++;
        }
        cout<<i<<endl;
    }
}
