#include <iostream>

using namespace std;

void potencia(){
    int base, expoente, i, res = 1;
    
    cin >> base >> expoente;
    
    for(i = 0; i < expoente; i++){
        res *= base;
    }
    
    cout << res << endl;
}

int main(){
    potencia();

    return 0;
}