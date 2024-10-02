#include <iostream>

using namespace std;

int main(){
    extern int x;
    cout << x << endl;
    x = 5;
    cout << x << endl;

    return 0;
}