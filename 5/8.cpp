#include <vector>
#include <iostream>

using namespace std;

void maiuscula(string P){
    for(int i = 0; i < P.length(); i++){
        if(P[i] > 96 && P[i] < 123){
            P[i] -= 32;
        }
    }
    cout << P << endl;
}

int main(){
    string palavra;
    getline(cin, palavra);
    
    maiuscula(palavra);

    return 0;
}