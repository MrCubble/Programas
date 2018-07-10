#include <iostream>

using namespace std;

int main()
{
    /*Variables*/

    int a, b, c;

    /*Code*/

    cin>>a>>b>>c;
    a = a + b + c;
    if(a > 24)
        a = a - 24;
    else if(a < 0)
        a = a + 24;
    else if(a==24)
        a = 0;
    cout<<a<<endl;
}
