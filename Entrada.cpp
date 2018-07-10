#include<iostream>

using namespace std;

int main()
{
    double pi = 3.14159;
    cout<<"Hello World!!!"<<endl;
    cout.precision(2);//Seta a precisão
    cout.setf(ios::fixed);//Permanece ela fixada
    cout<<pi<<endl;
}
