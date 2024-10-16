#include <iostream>
using namespace std;

int main(){
    int N, i, soma = 0;
    cin >> N;
    int v[N];
    for(i = 0; i < N; i++){
        cin >> v[i];
        soma += v[i];
    }
    cout << "soma de todos os elementos do vetor: " << soma << endl;
}