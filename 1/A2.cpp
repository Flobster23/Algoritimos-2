#include <iostream>

using namespace std;

void PI(){
    int N;
    cin >> N;
    N % 2 == 0 ? cout << N << " é par " << endl : cout << N << " é impar";
}

int main(){
    PI();

    return 0;
}