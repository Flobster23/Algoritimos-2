#include <iostream>
using namespace std;

void coutingSort(int v[], int N){
    int max = v[0];
    for (int i = 1; i < N; i++){ //acha o maior elemento do vetor
        if (v[i] > max) 
            max = v[i];
    }

    int *count = new int[max + 1]; //cria um vetor do tamanho do maior elemento do vetor

    for (int i = 0; i <= max; i++){ //zera o vetor
        count[i] = 0;
    }

    for (int i = 0; i < N; i++){ //realiza a contagem de quantas vezes o elemento do vetor original se repetiu
        count[v[i]]++;
    }

    for (int i = 1; i <= max; i++){ //tira as casas que não estavam no vetor original
        count[i] += count[i - 1]; 
    }

    int *output = new int[N]; //vetor de saida

    for (int i = N - 1; i >= 0; i--){ 
        output[count[v[i]] - 1] = v[i];
        count[v[i]]--;
    }

    for (int i = 0; i < N; i++){ //substitui o vetor original pelo ordenado
        v[i] = output[i];
    }

    delete[] count;
    delete[] output;    
}

int main(){
    int N;
    cin >> N;
    int v[N];

    for (int i = 0; i < N; i++){
        cin >> v[i];
    }

    coutingSort(v, N);

    for (int i = 0; i < N; i++){
        cout << v[i] << ", ";
    }

    cout << endl;
}