#include <iostream>
#define MAXN 10005
using namespace std;

int josephus (int a, int b)
{
    if(a == 1)
        return 1;
    else
        return ((josephus(a-1,b)+b-1)%a)+1;
}

int main()
{
    int n, i, a, b, j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        cout<<"Case "<<i+1<<": "<<josephus(a,b)<<endl;
    }
}
