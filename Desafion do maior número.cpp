#include <iostream>
#define MAX -1000000

using namespace std;

int main()
{
    /*Variables*/

    int a, b = MAX;

    /*Code*/
    do
    {
        cin>>a;
        if(b<a)
            b = a;
    }while(a!=0);
    cout<<b<<endl;
}
