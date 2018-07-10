#include <iostream>

using namespace std;

int main()
{
    int n, c, t, ec, et;
    string a, b;
    cin>>n;
    c=0;
    t=0;
    et=0;
    ec=0;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a=="chuva")
        {
            if(ec!=0)
            {
                ec--;
                et++;
            }
            else
            {
                c++;
                et++;
            }
        }
        if(b=="chuva")
        {
            if(et!=0)
            {
                et--;
                ec++;
            }
            else
            {
                t++;
                ec++;
            }
        }
    }
    cout<<c<<' '<<t<<endl;
}
