#include <iostream>

using namespace std;

int main()
{
    string linha;
    while(getline(cin, linha))
    {
        if(linha[0]!=linha[2]&&linha[0]!=linha[4])
            cout<<"A"<<endl;
        else if(linha[2]!=linha[0]&&linha[2]!=linha[4])
            cout<<"B"<<endl;
        else if(linha[4]!=linha[0]&&linha[4]!=linha[2])
            cout<<"C"<<endl;
        else
            cout<<"*"<<endl;
    }
}
