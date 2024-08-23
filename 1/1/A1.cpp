#include <iostream>

using namespace std;

void m4(){
    int N;
    cin >> N;
    N % 4 == 0 ? cout << N << " é multiplo de 4 " << endl : cout << N << " não é multiplo de 4";
}

int main(){
    m4();

    return 0;
}