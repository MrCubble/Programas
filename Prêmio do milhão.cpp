#include <iostream>

using namespace std;

int main()
{
    /*Variables*/
    int a, b, c = 0, d = 1;//a is the number of days, b is the number of entries in that day, c is an auxiliary number and d is the answer
    bool e = true;
    /*Code*/
    cin>>a;
    while(a>0)
    {
        cin>>b;
        c+=b;
        if(c>=1000000&&e)
            e = !e;
        if(e)
        {
            d++;
        }
        a--;
    }
    cout<<d<<endl;
}
