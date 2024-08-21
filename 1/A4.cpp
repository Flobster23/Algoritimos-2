#include <iostream>
#include <cmath>

using namespace std;

void volumeEsfera(){
    float raio;
    
    cin >> raio;
    
    cout << (4 * M_PI * pow(raio, 3)) / 3;
}

int main(){
    volumeEsfera();

    return 0;
}