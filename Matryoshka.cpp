#include <iostream>
#include <algorithm>

#define MAXN 100000

using namespace std;

int main()
{
    //Vari�veis
    int v[MAXN], n, i, e[MAXN], r;
    //C�digo
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>v[i];
        e[i] = v[i];
    }
    sort(v,v+n);
    for(i=0,r=0; i<n; i++)
    {
        if(e[i]!=v[i])
            r++;
    }
    cout<<r<<endl;
    for(i=0,r=0; i<n; i++)
    {
        if(e[i]!=v[i])
            cout<<v[i]<<" ";
    }
    cout<<endl;
}
