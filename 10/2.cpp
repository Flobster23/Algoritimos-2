#include <iostream>

using namespace std;

void insere(int *v, int N){
    int *p;
    int i = 0;
    for (p = v; p != &v[N]; p++) {
        *p = i;
        i++;
    }
}

int main(){
    int qtd, *p;
    cin >> qtd;
    int *v = new int[qtd];

    insere(v, qtd);

    for (p = v; p != &v[qtd]; p++) {
        cout << *p << " ";
    }

    cout << endl;

    delete[] v;
    return 0;
}