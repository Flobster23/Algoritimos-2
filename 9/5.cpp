#include <iostream>

using namespace std;

int main(){
    int num1 = 4, num2 = 3, *p1, *p2;
    p1 = &num1;
    p2 = &num2;
    if(*p1 == *p2){
        cout << *p1 << endl;
    }else{
        cout << *p2 << endl;
    }

    return 0;
}