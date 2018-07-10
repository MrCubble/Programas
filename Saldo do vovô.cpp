#include <iostream>

using namespace std;

int main()
{
    /*Variables*/

    int a, b, c, d = 1010;// a is the number of days, b is the movement banking, c is the money in the bank, and d the answer

    /*Code*/
    cin>>a>>c;
    while(a>0)
    {
        a--;
        cin>>b;
        c+=b;
        if(d>c)
            d = c;
    }
    cout<<d<<endl;
}
