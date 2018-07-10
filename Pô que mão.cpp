#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //Variáveis
    int tot, v[3], i, poke=0, soma=0;
    cin>>tot;
    for(i=0; i<3; i++)
        cin>>v[i];
    sort(v,v+3);
    i = 0;
    while(i<3)
    {
        if((soma + v[i]) <= tot)
        {
            soma += v[i++];
            poke++;
        }
        else
            i = 3;
    }
    cout<<poke<<endl;
}
