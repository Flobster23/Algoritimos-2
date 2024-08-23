#include <iostream>

using namespace std;

int soma = 0;

int somaIntervalo(int valor1, int valor2){
    int i;
    
    for(i = valor1; i <= valor2; i++){
        soma += i;
    }
    
    return soma;
}

int main(){
    int N1, N2;
    
    cin >> N1 >> N2;
    
    cout << somaIntervalo(N1, N2) << endl;

    return 0;
}