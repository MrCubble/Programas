#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, a;
    set <int> S;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        S.insert(a);
    }
    cout<<S.size()<<endl;
}
