#include <iostream>

#define MAXN 120

using namespace std;

int main()
{
    //Variáveis
    int a, v, x, y, i, nteste =0, mas, aeroportos[MAXN];
    //Código
    while(cin>>a>>v &&a)
    {
        for(i=1; i<=a; i++)
            aeroportos[i] = 0;
        for(i=0; i<v ; i++)
        {
            cin>>x>>y;
            aeroportos[x]++;
            aeroportos[y]++;
        }
        mas = aeroportos[1];
        for(i = 1; i<=a; i++)
        {
            if(aeroportos[i] >mas)
                mas = aeroportos[i];
        }
        cout<<"Teste "<<++nteste<<endl;
        for(i=1; i<=a; i++)
        {
            if(aeroportos[i] == mas)
                cout<<i<<" ";
        }
        cout<<endl<<endl;
    }
}
