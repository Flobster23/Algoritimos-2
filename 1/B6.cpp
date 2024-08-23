#include <iostream>

using namespace std;

int potencia(int valor1, int valor2){
    int i, res = 1;
    
    for(i = 0; i < valor2; i++){
        res *= valor1;
    }
    
    return res;
}

int main(){
    int base, expoente;
    
    cin >> base >> expoente;
    
    cout << potencia(base, expoente) << endl;

    return 0;
}