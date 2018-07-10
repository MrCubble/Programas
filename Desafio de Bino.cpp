#include <iostream>
#define ULT 1010

using namespace std;

int b[4];

int main()
{
    int n, a[ULT], c=0;
    cin>>n;
    while(n>0)
    {
        cin>>a[c];
        if(a[c]%2==0)
            b[0]++;
        if(a[c]%3==0)
            b[1]++;
        if(a[c]%4==0)
            b[2]++;
        if(a[c]%5==0)
            b[3]++;
        n--;
    }
    cout<<b[0]<<" Multiplo(s) de 2"<<endl;
    cout<<b[1]<<" Multiplo(s) de 3"<<endl;
    cout<<b[2]<<" Multiplo(s) de 4"<<endl;
    cout<<b[3]<<" Multiplo(s) de 5"<<endl;
}
