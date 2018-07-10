#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m, a;
    cin>>n;
    for(int x=0; x<n; x++)
    {
        cin>>m;
        vector <int> arr;
        for(int i=0; i<m; i++)
        {
            cin>>a;
            if(a%2!=0)
                arr.push_back(a);
        }
        vector <int> arr_1;
        sort(arr.begin(), arr.end());
        int p=0, o = arr.size()-1;
        bool troca = true;
        while(p<=o)
        {
            if(troca)
            {
                arr_1.push_back(arr[o]);
                o--;
            }
            else
            {
                arr_1.push_back(arr[p]);
                p++;
            }
            troca = !troca;
        }
        for(int i=0; i<arr_1.size(); i++)
        {
            if(i==arr_1.size()-1)
                cout<<arr_1[i]<<endl;
            else
                cout<<arr_1[i]<<' ';
        }
        if(arr_1.size()==0)
            cout<<endl;
    }
}
