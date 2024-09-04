#include <iostream>

using namespace std;

bool has_zero(int a[], int n) {
    int i;
    for (i = 0; i < n; i++){
        if (a[i] == 0){
            return true;
        }
    }
    
    return false; //a função original possui um else que nao é necessário ser usado, pois em um possivel caso
                    // onde não entra no looping for, a função ficaria sem retorno.
}

int main(){
    int N, i;
    cin >> N;
    int v[N];
    
    for(i = 0; i < N; i++){
        cin >> v[i];
    }
    
    cout << has_zero(v, N) << endl;
    
    return 0;
}