#include <iostream>

using namespace std;

int main()
{
    int h1,m1,h2,m2,m3=0,h3=0;
    cin>>h1>>m1>>h2>>m2;
    do
    {
        m3 = m2 - m1;
        if(m3<0)
        {
            m3+=60;
            h2--;
            if(h2<0)
            {
                h2=23;
            }
        }
        h3 = h2 - h1;
        if(h3<0)
        {
            h3+=24;
        }
        m3 = m3 + h3*60;
        cout<<m3<<endl;
        m3 = 0;
        h3 = 0;
        cin>>h1>>m1>>h2>>m2;
    }while(!(h1==0&&m1==0&&h2==0&&m2==0));
}
