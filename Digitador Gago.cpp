#include <iostream>

using namespace std;

int main()
{
    string palavras;
    getline(cin, palavras);
    int i=0;
    do{
        if(i==0)
        {
            if(palavras[i]==palavras[i+2]&&palavras[i+1]==palavras[i+3])
            {
                i = i+2;
            }
        }
        if(palavras[i]==' ')
        {
            if(palavras[i+1]==palavras[i+3]&&palavras[i+2]==palavras[i+4])
            {
                cout<<palavras[i];
                i=i+3;
            }
        }
        cout<<palavras[i];
        i++;
    }while(palavras[i]!='\0');
    cout<<endl;
}
