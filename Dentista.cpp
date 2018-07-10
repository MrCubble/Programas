#include <bits/stdc++.h>

using namespace std;

vector < pair <int, int> > consultas;

bool cmp(pair <int,int> a, pair <int, int> b)
{
    return a.second <b.second;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        consultas.push_back(make_pair(a,b));
    }
    sort(consultas.begin(), consultas.end(), cmp);
    pair <int, int> atual = consultas.front();
    int q_consultas = 1;
    for(int i=1; i<n; i++)
    {
        if(atual.second <= consultas[i].first)
        {
            q_consultas++;
            atual = consultas[i];
        }
    }
    cout<<q_consultas<<endl;
    return 0;
}
