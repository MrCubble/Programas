#include <iostream>

using namespace std;

int main()
{
      int n;
		cin>>n;
      for(int i=0; i<n; i++)
      {
            char a, b, c;
            cin>>a>>b>>c;
            int A = a - '0';
            int C = c - '0';
            if(a == c) cout<<A*C<<endl;
            else if(b>='a' && b<='z') cout<<A + C<<endl;
            else cout<<C - A<<endl;
      }
}
