#include <iostream>

using namespace std;

void incrementa(){
    static int num = 10;
    num++;
    cout << num << endl;
}

int main(){
    incrementa();
    incrementa();
    incrementa();
    incrementa();
    incrementa();
    incrementa();

    return 0;
}