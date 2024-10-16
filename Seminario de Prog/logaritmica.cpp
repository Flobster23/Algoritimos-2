#include <iostream>
using namespace std;

int binnarySearch(int v[], int N, int num){
    int primeiro = 0;
    int ultimo = N - 1;
    while(primeiro <= ultimo){
        int meio = (primeiro + ultimo) / 2;
        if(v[meio] == num){
            return meio;
        }else if(v[meio] < num){
            primeiro = meio + 1;
        }else{
            ultimo = meio - 1;
        }
    }
    return -1;
}

int main(){
    int N, num, teste;
    cin >> N >> num;
    cout << endl << "Por favor, enumere o vetor em ordem crescente (eu confio em vc)" << endl;
    int v[N];
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    teste = binnarySearch(v, N, num);
    if(teste == -1){
        cout << "o numero escolhido não está no vetor" << endl;
    }else{
        cout << "o numero escolhido está na posição " << teste << " do vetor." << endl;
    }
    return 0;
}