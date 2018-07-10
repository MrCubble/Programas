#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string expressao;
        stack <char> exp;
        bool resp = true;
        cin>>expressao;
        for(int j =0; j<(int)expressao.size() && resp; j++)
        {
            if(expressao[j]=='('||expressao[j]=='['||expressao[j]=='{') exp.push(expressao[j]);
            else
            {
                if(exp.empty())
                    resp = false;
                else
                {
                    if((expressao[j]==')'&&exp.top()!='(')||(expressao[j]==']'&&exp.top()!='[')||(expressao[j]=='}'&&exp.top()!='{')) resp = false;
                    else exp.pop();
                }
            }
        }
        if(!exp.empty()) resp = false;
        if(resp) cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }
}
