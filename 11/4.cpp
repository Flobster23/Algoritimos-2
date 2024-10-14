#include <iostream>

using namespace std;

int achar(int v[], int N, int num){
    for(int i = 0; i < N; i++){
        if(v[i] == num){
            return i;
        }
    }
    return -1;
}

int main(){
    int N, v;
    cin >> N >> v;
    int vec[N];

    for(int i = 0; i < N; i++){
        cin >> vec[i];
    }

    cout << achar(vec, N, v) << endl;

    return 0;
}

//A complexidade do algoritimo vai ser O(n), no melhor caso o numero buscado será achado 
//logo na primeira casa do vetor, no pior caso, será achado apenas na ultima casa