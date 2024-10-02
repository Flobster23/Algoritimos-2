#include <iostream>

using namespace std;

int main(){
    int num, *p;
    const int x = 3;
    cin >> num;
    p = &num;
    *p = *p - x;
    cout << *p << endl;

    return 0;
}