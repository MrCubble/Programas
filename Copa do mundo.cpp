#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <char> jogos;
    int m, n;
    for(int i=0; i<16; i++)
        jogos.push_back('A' + i);
    for(int i=0, j=0; i<15; i++, j++)
    {
        cin>>m>>n;
        if(j >= jogos.size())
            j = 0;
        if(m>n)
            jogos.erase(jogos.begin() + j + 1);
        else
            jogos.erase(jogos.begin() + j);

    }
    cout<<jogos.front()<<endl;
    return 0;
}
