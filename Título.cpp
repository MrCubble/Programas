#include <iostream>

using namespace std;

string title(string F){
	int i;
	F[0] = toupper(F[0]);
	for(i=1; i<F.size(); i++)
    {
        if(F[i] == ' ')
            F[i + 1] = toupper(F[i+1]);
        if(F[i-1]!= ' ')
            F[i] = tolower(F[i]);
    }
    return F;
}

int main(){
	string F;

	getline(cin, F);

	cout<<title(F)<<"\n";
}
