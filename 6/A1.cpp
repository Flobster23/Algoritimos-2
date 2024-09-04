#include <iostream>

using namespace std;

void ordena(int valor1, int valor2){
    if(valor1 > valor2){
        int *p, aux;
        p = &valor1;
        aux = valor2;
        valor2 = *p;
        *p = aux;
    }
    
    cout << valor1 << endl << valor2;
}

int main(){
    int a, b;
    cin >> a >> b;
    ordena(a, b);
    
    return 0;
}