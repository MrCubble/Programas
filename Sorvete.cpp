#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool contido(pair < int, int > a, pair <int , int > b)
{
    if((a.first>=b.first&&a.first<=b.second)||(a.second>=b.first&&a.second<=b.second)||(a.first<=b.first&&a.second>=b.second))
        return true;
    return false;
}

int main()
{
    int t, s;
    cin>>t>>s;//tamanho da praia e sorveteiros
    if(s)
    {
        vector < pair < int, int > > intervalos;
        for(int i=0; i<s; i++)
        {
            int a, b;
            cin>>a>>b;
            intervalos.push_back(make_pair(a,b));
        }
        sort(intervalos.begin(), intervalos.end());
        for(int i=0; i<intervalos.size()-1; )
        {
            if(contido(intervalos[i], intervalos[i+1]))
            {
                pair <int, int> c;
                if(intervalos[i].first<intervalos[i+1].first) c.first = intervalos[i].first;
                else c.first = intervalos[i+1].first;
                if(intervalos[i].second>intervalos[i+1].second) c.second = intervalos[i].second;
                else c.second = intervalos[i+1].second;
                intervalos[i] = c;
                intervalos.erase(intervalos.begin() + i + 1);
            }
            else{
                i++;
            }
        }
        for(int i=0; i<intervalos.size();i++)
            cout<<intervalos[i].first<<' '<<intervalos[i].second<<endl;
    }
    else{
        cout<<"0 0"<<endl;
    }
}
