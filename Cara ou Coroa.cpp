#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n&&n)
    {
        int mary =0, john =0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(a==0)mary++;
            else john++;
        }
        cout<<"Mary won "<<mary<<" times and John won "<<john<<" times"<<endl;
    }
}
