//Codigo de exemplo
#include<iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin>>a>>b;
    c = a / b;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<c<<endl;
}
