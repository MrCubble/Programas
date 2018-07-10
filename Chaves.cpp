#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main()
{
    int n;
    bool certa = true;
    cin>>n;
    stack <char> chaves;
    char c;
    while(scanf("%c", &c)!= EOF)
    {
        if(c == '{') chaves.push('{');
            else
            {
                if(c=='}')
                {
                    if(chaves.empty()) certa = false;
                    else chaves.pop();
                }
            }
    }
    if(certa && chaves.empty()) cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;
}
