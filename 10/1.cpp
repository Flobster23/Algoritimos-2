#include <iostream>

using namespace std;

void insere(int *v, int N){
    for (int i = 0; i < N; i++) {
        v[i] = i;
    }
}

int main(){
    int qtd;
    cin >> qtd;
    int *v = new int[qtd];

    insere(v, qtd);

    for (int i = 0; i < qtd; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    delete[] v;
    return 0;
}