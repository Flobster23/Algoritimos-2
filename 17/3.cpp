#include <iostream>

using namespace std;

int buscaSequencialRecursiva(int v[], int N, int num, int i){
    if(i == N){
        return -1;
    }

    if(v[i] == num){
        return i;
    }
    
    i++;
    buscaSequencialRecursiva(v, N, num, i);
    
}

int main(){
    int N;
    cin >> N;
    int v[N];
    for (int i = 0; i < N; i++){
        cin >> v[i];
    }

    cout << "Digite o numero que quer buscar: ";
    int num;
    cin >> num;
    cout << endl;

    int res = buscaSequencialRecursiva(v, N, num, 0);
    if(res != -1){
        cout << "O numero foi encontrado na posicao " << res << endl;
    }else{
        cout << "O numero nao foi encontrado." << endl;
    }
}
