#include <iostream>
#include <cmath>

using namespace std;

void bissexto(){
    int ano;
    
    cin >> ano;
    
    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        cout << "é bissexto" << endl;
    }else{
        cout << "não é bissexto" << endl;
    }
    
}

int main(){
    bissexto();

    return 0;
}