#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /*Variables*/

    int a;
    string b[2], c[] = {"ataque","pedra", "papel"};

    /*Code*/

    cin>>a;
    while(a>0)
    {
        cin>>b[0]>>b[1];
        if(b[0]==c[2]&&b[1]==c[2])
            cout<<"Ambos venceram"<<endl;
        else if(b[0]==c[2])
            cout<<"Jogador 2 venceu"<<endl;
        else if(b[1]==c[2])
            cout<<"Jogador 1 venceu"<<endl;
        else if(b[0]==c[1]&&b[1]==c[1])
            cout<<"Sem ganhador"<<endl;
        else if(b[0]==c[0]&&b[1]==c[0])
            cout<<"Aniquilacao mutua"<<endl;
        else if(b[0]==c[0])
            cout<<"Jogador 1 venceu"<<endl;
        else
            cout<<"Jogador 2 venceu"<<endl;
        a--;
    }
}
