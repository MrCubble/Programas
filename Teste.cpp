#include <set> //Biblioteca do set
#include <iostream>

using namespace std;

int main(){
    set<int> S; //Cria uma variável do tipo set para armazenar números inteiros

    S.insert(7); //Adiciona o elemento 10 no set
    S.insert(10); //Adiciona o elemento 10 no set
    S.insert(3); //Adiciona o elemento 3 no set
    S.insert(3);
    for (set<int>::iterator it=S.begin(); it!=S.end(); ++it){
      cout << *it << " ";
    }
    cout<<"\n";
}
