#include <set> //Biblioteca do set
#include <iostream>

using namespace std;

int main(){
    set<int> S; //Cria uma vari�vel do tipo set para armazenar n�meros inteiros

    S.insert(7); //Adiciona o elemento 10 no set
    S.insert(10); //Adiciona o elemento 10 no set
    S.insert(3); //Adiciona o elemento 3 no set
    S.insert(3);
    for (set<int>::iterator it=S.begin(); it!=S.end(); ++it){
      cout << *it << " ";
    }
    cout<<"\n";
}
