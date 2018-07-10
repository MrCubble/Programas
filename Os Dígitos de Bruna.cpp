#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long int a;
    int t;
    cin>>t;
    for(int q=0; q<t; q++)
    {
        int d;
        cin>>d;
        vector <string> arr;
        for(int i=0; i<d; i++)
        {
            string x;
            cin>>x;
            arr.push_back(x);
        }
        cin>>a;
        sort(arr.begin(), arr.end());
        while(arr.size()<a)
        {
            for(int i=0; i<arr.size()&&arr.size()<a; i++)
            {
                int tam = arr.size();
                sort(arr.begin(), arr.end());
                for(int j=0; j<tam&& arr.size()<a; j++)
                {
                    arr.push_back(arr[i]+arr[j]);
                }
            }
        }
        cout<<arr[a-1]<<endl;
    }
}
