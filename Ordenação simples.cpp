#include <iostream>
#include <algorithm>

#define MAXN 100000

using namespace std;

int main()
{
    //Variáveis
    int v[MAXN], n, i;
    //Código
    cin>>n;
    for(i=0; i<n; i++)
        cin>>v[i];
    sort(v, v+n);
    for(i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
