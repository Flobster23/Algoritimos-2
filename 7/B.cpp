#include <iostream>

using namespace std;

typedef struct{
    float x;
    float y;
    float z;
}vetor;

void preenche(vetor *vetor){
    cout << "x: ";
    cin >> vetor->x;
    cout << endl;
    cout << "y: ";
    cin >> vetor->y;
    cout << endl;
    cout << "z: ";
    cin >> vetor->z;
    cout << endl;
}

vetor soma(vetor *vetor1, vetor *vetor2){
    vetor vetorSoma;
    vetorSoma.x = vetor1->x + vetor2->x;
    vetorSoma.y = vetor1->y + vetor2->y;
    vetorSoma.z = vetor1->z + vetor2->z;
    return vetorSoma;
}

int main(){
    vetor vetores[2];
    preenche(&vetores[0]);
    cout << endl;
    preenche(&vetores[1]);
    vetores[2] = soma(&vetores[0], &vetores[1]);
    cout << "Soma dos vetores: " << "(" << vetores[2].x << ", " << vetores[2].y << ", " << vetores[2].z << ")" << endl;
    return 0;
}