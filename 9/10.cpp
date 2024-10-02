#include <iostream>

using namespace std;

int main(){
    int *p, *u, x = 3, y = 2;
    p = &x;
    u = &y;

    cout << p << endl << u << endl;

    if(p > u){
        cout << *p << endl;
    }else{
        cout << *u << endl;
    }

    return 0;
}