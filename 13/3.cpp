#include <iostream>

using namespace std;

int somaPar(int n){
    if(n <= 1){
        return 0;
    }
    return n + somaPar(n - 2);
}

int main(){
    int n;
    cin >> n;
    if(n % 2 != 0){
        n--;
    }
    cout << somaPar(n) << endl;
    return 0;
}