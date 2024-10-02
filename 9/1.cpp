#include <iostream>

using namespace std;

int main(){
    int num, *p;
    cin >> num;
    p = &num;
    p--;
    cout << *p << endl;
    p++;
    cout << *p << endl;
}