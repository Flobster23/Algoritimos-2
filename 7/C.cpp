#include <iostream>

using namespace std;

typedef struct{
    float parteReal;
    float parteImaginaria;
}numeroComplexo;

void soma(numeroComplexo N1, numeroComplexo N2){
    float somaReal, somaImaginaria;
    somaReal = N1.parteReal + N2.parteReal;
    somaImaginaria = N1.parteImaginaria + N2.parteImaginaria;
    cout << "Soma = " << somaReal << " + " << somaImaginaria << "i" << endl;
}

void subtracao(numeroComplexo N1, numeroComplexo N2){
    float subReal, subImaginaria;
    subReal = N1.parteReal - N2.parteReal;
    subImaginaria = N1.parteImaginaria - N2.parteImaginaria;
    cout << "Subtracao = " << subReal << " + " << subImaginaria << "i" << endl;
}

void produto(numeroComplexo N1, numeroComplexo N2){
    float produtoReal, produtoImaginario;
    produtoReal = N1.parteReal * N2.parteReal;
    produtoImaginario = N1.parteImaginaria * N2.parteImaginaria;
    cout << "Produto = " << produtoReal << " + " << produtoImaginario << "i" << endl;
}

int main(){
    numeroComplexo z, w;
    cout << "Digite o valor real e imaginario, respectivamente, do primeiro numero complexo: " << endl;
    cin >> z.parteReal >> z.parteImaginaria;
    cout << "Digite o valor real e imaginario, respectivamente, do segundo numero complexo: " << endl;
    cin >> w.parteReal >> w.parteImaginaria;

    soma(z,w);
    cout << endl;
    subtracao(z,w);
    cout << endl;
    produto(z,w);
    cout << endl;

    return 0;
}