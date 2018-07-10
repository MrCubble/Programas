#include <iostream>

using namespace std;

int main()
{
    /*Variables*/

    int n, m;
    string a;

    /*Code*/

    cin>>n>>m;
    while(m>0)
    {
        cin>>a;
        if(a=="fechou")
            n++;
        else
            n--;
        m--;
    }
    cout<<n<<endl;
}
