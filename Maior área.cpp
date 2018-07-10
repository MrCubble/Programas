#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin>>a>>b>>c>>d;
    e = a * b;
    f = c * d;
    if( e > f)
        cout<<"Primeiro"<<endl;
    else if( e < f)
        cout<<"Segundo"<<endl;
    else
        cout<<"Empate"<<endl;
}
