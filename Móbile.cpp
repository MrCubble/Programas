#include <iostream>
#include <vector>

using namespace std;

vector <vector <int>    > pendura;

int ta_mec;

int resolve(int x)
{
    int peso, atual, total, n;
    n = pendura[x].size();
    total = 1;
    for(int i=0; i<n; i++)
    {
        atual = resolve(pendura[x][i]);
        if(!i) peso = atual;
        else if(atual!=peso) ta_mec = 0;
        total += atual;
    }
    return total;
}

int main()
{
    int n, a, b;
    cin>>n;
    pendura.resize(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        pendura[b].push_back(a);
    }
    ta_mec = 1;
    resolve(0);
    if(ta_mec)
        cout<<"bem"<<endl;
    else
        cout<<"mal"<<endl;
}
