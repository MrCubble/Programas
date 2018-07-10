#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vetor;
    int n, a, m, i, j, k;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        vetor.push_back(a);
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>a;
        for(j = vetor.size(), k=0; j==vetor.size(); ++k)
        {
            if(a==vetor[k])
                vetor.erase(vetor.begin()+k);
        }
    }
    for(i=0; i<vetor.size(); i++)
        cout<<vetor[i]<<" ";
    cout<<endl;
}
