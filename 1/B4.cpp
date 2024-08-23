#include <iostream>
#include <cmath>

using namespace std;

float volumeEsfera(int valor){
    return((4 * M_PI * pow(valor, 3)) / 3);
}

int main(){
    int raio;
    
    cin >> raio;
    
    cout << volumeEsfera(raio) << endl;

    return 0;
}