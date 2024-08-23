#include <iostream>

using namespace std;

void fatorial(){
    int N, fat = 1, i;
    
    cin >> N;
    
    if(N >= 0){
        if(N != 0 && N != 1){
            for(i = 2; i <= N; i++){
                fat *= i;
            }
        }
    }
    
    cout << fat << endl;
}

int main(){
    fatorial();

    return 0;
}