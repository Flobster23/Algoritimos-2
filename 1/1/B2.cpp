#include <iostream>

using namespace std;

bool PI(int valor){
    return(valor % 2 == 0 ? true : false) ;
}

int main(){
    int num;
    
    cin >> num;
    
    if(PI(num)){
        cout << "é par" << endl;
    }else{
        cout << "é impar" << endl;
    }

    return 0;
}