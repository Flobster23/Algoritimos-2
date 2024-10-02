#include <iostream>

using namespace std;

int main(){
    int N = 10, v[N], *p, *u = &v[N - 1], num = 10;

    for(p = v; p != u; p++){
        *p = num;
        num--;
    }

    for(p = v; p != u; p++){
        cout << *p << endl;
    }

    return 0;
}