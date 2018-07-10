#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char nomes[6][15] = {" ", "Rolien", "Naej", "Elehcim", "Odranoel", " "};
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int k;
        scanf("%d", &k);
        for(int j=0; j<k; j++)
        {
            int x;
            scanf("%d", &x);
            printf("%s\n", nomes[x]);
        }
    }
    return 0;
}
