#include <iostream>

using namespace std;

int somatoria(int n){
    if(n == 1){
        return 1;
    }
    return n + somatoria(n - 1);
}

int main(){
    int N;
    cin >> N;
    cout << somatoria(N);
}