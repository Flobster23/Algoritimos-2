#include <iostream>

using namespace std;

int buscaSequencialIterativa(int v[], int N){
    cout << "Digite o numero que quer buscar: ";
    int num;
    cin >> num;
    cout << endl;

    for(int j = 0; j < N; j++){
        if(v[j] == num){
            return j;
        }
    }

    return-1;
}

int main(){
    int N;
    cin >> N;
    int v[N];
    for (int i = 0; i < N; i++){
        cin >> v[i];
    }
    int res = buscaSequencialIterativa(v, N);
    if(res != -1){
        cout << "O numero foi encontrado na posicao " << res << endl;
    }else{
        cout << "O numero nao foi encontrado." << endl;
    }
}
