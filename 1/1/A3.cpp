#include <iostream>

using namespace std;

void somaIntervalo(){
    int N1, N2, soma = 0, i;
    
    cin >> N1 >> N2;
    
    for(i = N1; i <= N2; i++){
        soma += i;
    }
    
    cout << soma;
}

int main(){
    somaIntervalo();

    return 0;
}