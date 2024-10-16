#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N % 2 == 0){
        cout << N << "é par!" << endl;
    }else{
        cout << N << "é impar!" << endl;
    }
    return 0;
}