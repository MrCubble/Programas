#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, k, r, dxf,dyf, dxj, dyj;
    char lugar[35][35];
    cin>>n;
    for(int q=0; q<n; q++)
    {
        cin>>k>>r;//som máximo e linhas
        for(int i=0; i<r; i++)
        {
            cin>>lugar[i];
        }
        for(int i=0; i<r; i++)
        {
            for(int j=0; lugar[i][j]!='\0' ;j++)
            {
                if(lugar[i][j]=='F')
                {
                    dxf = i+1;
                    dyf = j+1;
                }
                if(lugar[i][j]=='J')
                {
                    dxj = i+1;
                    dyj = j+1;
                }
            }
        }
        int d = sqrt(pow(10*(dxf-dxj),2)+pow(10*(dyf-dyj),2));
        int resp = k/pow(0.99, d);
        cout<<resp<<" dBs"<<endl;
    }
}
