#include <bits/stdc++.h>

using namespace std;

vector < pair <int ,int> > entregas;

bool cmp(pair <int,int> a, pair <int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int n, atraso, atual;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        entregas.push_back(make_pair(a, b));
    }
    sort(entregas.begin(), entregas.end(), cmp);
    atual = 0;
    atraso = 0;
    for(int i=0; i<n; i++)
    {
        atraso = max(atraso,atual+entregas[i].first-entregas[i].second);
        //printf("%d %d -> %d\n", atual, entregas[i].first, atraso);
        atual += entregas[i].first;
    }
    printf("%d\n", atraso);
    return 0;
}
