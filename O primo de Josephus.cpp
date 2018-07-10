#include <iostream>
#include <string.h>
#define MAXN 3502

using namespace std;

int vetor_primos[MAXN], tamanho_primos = 0, vetor[MAXN];


int primos(int numero)
{
    int i, j;
    bool primo;
    if(numero<=tamanho_primos)
        return vetor_primos[numero - 1];
    else
    {
        j = vetor_primos[tamanho_primos-1];
        while(tamanho_primos<numero)
        {
            j++;
            i = 0;
            primo = true;
            while(i<tamanho_primos && primo)
            {
                if(j%vetor_primos[i] == 0)
                    primo = false;
                else
                    i++;
            }
            if(primo)
            {
                vetor_primos[tamanho_primos++] = j;
            }
        }
        return vetor_primos[tamanho_primos-1];
    }
}

void elimina(int comeco, int fim)
{
    int i=0;
    for (i=comeco; i<=fim; i++)
        vetor[i] = vetor[i+1];
}

int josephus(int tamanho)
{
        int i, j;
        for(i=0; i<tamanho; i++)
        {
            vetor[i] = i + 1;
        }
        i = 0;
        j = 1;
        while(tamanho>1)
        {
            i +=primos(j++);
            if(i%tamanho==0)
                i = tamanho - 1;
            else if(i>tamanho)
                i = i%tamanho - 1;
            else
                i = i - 1;
            elimina(i, tamanho--);
        }
        return vetor[0];
}

int main()
{
    int n;
    memset(vetor_primos, 0, sizeof(vetor_primos));
    memset(vetor, 0, sizeof(vetor));
    vetor_primos[tamanho_primos++] = 2;
    while(cin>>n&&n)
    {
        cout<<josephus(n)<<endl;
    }
}
