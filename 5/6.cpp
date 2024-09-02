#include <string>
#include <iostream>

using namespace std;

int sub5(int *a){
    *a -= 5;
    return(*a);
}

int main(){
    int x;
    cin >> x;
    
    cout << sub5(&x) << endl;

    return 0;
}