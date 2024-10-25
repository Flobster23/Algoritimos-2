#include <iostream>

using namespace std;

int contaDig(int n){
    static int soma = 1;
    if(n / 10 == 0){
        return soma;
    }
    contaDig(n / 10);
    soma++;
}

int main(){
    int n;
    cin >> n;
    cout << "O numero tem " << contaDig(n) << " digitos." << endl;
}

