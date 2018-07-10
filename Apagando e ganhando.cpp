#include <iostream>
#define MAXN 100100

using namespace std;

int main()
{
    char pilha[MAXN], c;
    int n, d, apagados, topo, i;
    while(cin>>n>>d&&n&&d)
    {
        apagados = 0;
        for(i = 0, topo = -1; i<n; i++)
        {
            cin>>c;
            while(topo>-1 && apagados<d && c>pilha[topo])
            {
                topo--;
                apagados++;
            }
            if(topo+1<n-d) pilha[++topo] = c;
        }
        pilha[++topo] = '\0';
        cout<<pilha<<endl;
    }
    return 0;
}
