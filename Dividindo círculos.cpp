#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a = n*n*n - 6*n*n + 23*n - 18;
    long long int resp = (a*n)/24 + 1;
    cout<<resp<<endl;
    return 0;
}
