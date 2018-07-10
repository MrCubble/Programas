#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp_2(pair <string, int> a, pair <string , int > b)
{
    return a.second > b.second;
}

int main()
{
    int n, d, a, b;
    cin>>n>>d;
    vector < pair < string, int > > jogadores;
    for(int i=0; i<n; i++)
    {
        pair < string, int > jogador;
        cin>>jogador.first>>jogador.second;
        jogadores.push_back(jogador);
    }
    sort(jogadores.begin(), jogadores.end(), cmp_2);//Ordenou os jogadores
    vector < string > times[1005];
    for(int i=0, j=0; i<n; i++, j++)
    {
        //cout<<jogadores[i].first<<" "<<j<<endl;
        if(j>=d)
            j = 0;
        times[j].push_back(jogadores[i].first);
    }
    for(int i=0; i<d; i++)
    {
        cout<<"Time "<<i+1<<endl;
        sort(times[i].begin(), times[i].end());
        for(int j=0; j<times[i].size(); j++)
            cout<<times[i][j]<<endl;
        cout<<endl;

    }
}
