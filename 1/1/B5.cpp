#include <iostream>

using namespace std;

int fatorial(int N){
    int fat = 1, i;
    
    if(N >= 0){
        if(N != 0 && N != 1){
            for(i = 2; i <= N; i++){
                fat *= i;
            }
        }
    }

    return fat;
}

int main(){
    int num;
    
    cin >> num;
    
    cout << fatorial(num) << endl;

    return 0;
}