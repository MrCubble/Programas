#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dinheiro, nota;
    scanf("%d", &dinheiro);
    nota = dinheiro/100;
    dinheiro = dinheiro%100;
    nota += dinheiro/50;
    dinheiro = dinheiro%50;
    nota += dinheiro/25;
    dinheiro = dinheiro%25;
    nota += dinheiro/10;
    dinheiro = dinheiro%10;
    nota += dinheiro/5;
    dinheiro = dinheiro%5;
    nota += dinheiro;
    printf("%d\n", nota);
}
