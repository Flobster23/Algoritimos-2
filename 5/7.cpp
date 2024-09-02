#include <vector>
#include <iostream>

using namespace std;

int N;

void inverterVetor(int v1[]){
    int v2[9], i, j = 9;
    for(i = 0; i <= 9; i++){
        v2[i] = v1[j];
        j--;
    }
    
    for(i = 0; i <= 9; i++){
        v1[i] = v2[i];
    }
    
}

int main(){
    int vetor[9], i;
    
    for(i = 0; i <= 9; i++){
        vetor[i] = i + 1;
    }
    
    for(i = 0; i <= 9; i++){
        cout << vetor[i] << " ";
    }
    
    cout << endl;
    
    inverterVetor(vetor);
    
    for(i = 0; i <= 9; i++){
        cout << vetor[i] << " ";
    }
    
    cout << endl;

    return 0;
}