#include <iostream>

using namespace std;

int buscaBinariaIterativa(int v[], int N){
    cout << "Digite o numero que quer buscar: ";
    int num, inicio = 0, fim = N - 1;
    cin >> num;
    cout << endl;
    while(inicio <= fim){
        int meio = (inicio + fim) / 2;
        if(v[meio] == num){
            return meio;
        }
        if(v[meio] < num){
            inicio = meio + 1;
        }else{
            fim = meio;
        }
    }
    return -1;
}

int main(){
    int N;
    cin >> N;
    int v[N];
    for (int i = 0; i < N; i++){
        cin >> v[i];
    }
    int res = buscaBinariaIterativa(v, N);
    if(res != -1){
        cout << "O numero foi encontrado na posicao " << res << endl;
    }else{
        cout << "O numero nao foi encontrado." << endl;
    }
}
