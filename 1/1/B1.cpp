#include <iostream>

using namespace std;

bool par(int valor){
    return(valor % 4 == 0 ? true : false);
}

int main(){
    int num;
    
    cin >> num;
    
    if(par(num)){
        cout << "é multiplo de 4" << endl;
    }else{
        cout << "não é multiplo de 4" << endl;
    }

    return 0;
}