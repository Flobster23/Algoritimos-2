#include <iostream>

using namespace std;

int buscaBinariaIterativa(int v[], int N){
    cout << "Digite o numero que quer buscar: ";
    int num, inicio = 0, fim = N - 1;
    cin >> num;
    cout << endl;
    bool igual;

    while(inicio <= fim){
        int meio = (inicio + fim) / 2;
        if(v[meio] == num){
            while(igual){
                int i = 1;
                if(i <= N){
                    return -2;
                }
                if(v[meio + i] > v[meio]){
                    return(meio + i);
                    igual = false;
                }
                i++;
            }
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
    if(res == -1){
        cout << "O numero nao foi encontrado." << endl;
    }else if(res == -2){
        cout << "o numero digitado ja eh o maior do vetor" << endl;
    }else{
        cout << "O numero foi encontrado na posicao " << res << endl;
    }
}
