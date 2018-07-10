#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin>>n;
    int vetor[10000];
    for(int i=0; i<10000; i++)
        vetor[i] = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        vetor[a]++;
    }
    for(int i=0; i<10000; i++)
    {
        if(vetor[i]!=0) cout<<i<<" aparece "<<vetor[i]<<" vez(es)"<<endl;
    }

}
