#include <iostream>

using namespace std;

int main(){
    float numero1 = 7.3, numero2, *fp;
    
    fp = &numero1;
    
    cout << *fp << endl;
    
    fp = &numero2;
    
    cout << *fp << endl;
    
    cout << &numero1 << endl;
    
    cout << fp << endl; //o valor não será o mesmo porque o ponteiro aponta a variavel numero2

    return 0;
}