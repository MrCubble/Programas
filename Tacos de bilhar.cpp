#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, a, fab=0;
    set <int> S;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(S.find(a)!=S.end())
            S.erase(a);
        else
        {
            fab+=2;
            S.insert(a);
        }
    }
    cout<<fab<<endl;
}
