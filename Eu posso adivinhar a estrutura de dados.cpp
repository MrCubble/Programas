#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int x[1000][2];

int main()
{

    int i, n, tipo, a, b;
    bool efila, epilha, epfila;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>a>>b;//Operacao e numero
            x[i][0] = a;
            x[i][1] = b;
        }
        efila = 1;
        epilha = 1;
        epfila = 1;
        priority_queue <int> fila_prioridade;
        queue <int> fila;
        stack <int> pilha;
        for(i=0; i<n; i++)
        {
            if(x[i][0] == 1)//1 põe
            {
                fila.push(x[i][1]);
                pilha.push(x[i][1]);
                fila_prioridade.push(x[i][1]);
            }
            else//2 tira
            {
                if(fila.front()==x[i][1])
                {
                    fila.pop();
                }
                else
                {
                    fila.pop();
                    efila = false;
                }
                if(fila_prioridade.top()==x[i][1])
                {
                    fila_prioridade.pop();
                }
                else
                {
                    fila_prioridade.pop();
                    epfila = false;
                }
                if(pilha.top()==x[i][1])
                {
                    pilha.pop();
                }
                else
                {
                    pilha.pop();
                    epilha = false;
                }
            }
        }
        if(efila&&!epilha&&!epfila)
            cout<<"queue"<<endl;
        else if(epilha&&!epfila&&!efila)
            cout<<"stack"<<endl;
        else if(epfila&&!efila&&!epilha)
            cout<<"priority queue"<<endl;
        else if(!efila&&!epfila&&!epilha)
            cout<<"impossible"<<endl;
        else
            cout<<"not sure"<<endl;
    }
}
