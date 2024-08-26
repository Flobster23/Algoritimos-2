#include <iostream>
#include <ctime>

using namespace std;

void gerarNumeroAleatorio();

int main(){
   gerarNumeroAleatorio();
}

void gerarNumeroAleatorio(){
    srand(time(NULL));
    cout << rand() % 100 + 1 << endl;
}