#include <iostream>
#include <iomanip>

using namespace std;

double calcularAreaRetangulo(double, double);

int main(){
   int L, C;
   cin >> L >> C;
   
   cout << calcularAreaRetangulo(L, C) << endl;
}

double calcularAreaRetangulo(double valor1, double valor2){
    double area;
    area = valor1 * valor2;
    return area;
}