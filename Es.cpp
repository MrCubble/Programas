#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> opa;
    opa.push(1);
    cout<<opa.top()<<endl;
    opa.push(2);
    cout<<opa.top()<<endl;
}
