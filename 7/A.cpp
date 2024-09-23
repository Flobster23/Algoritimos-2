#include <iostream>

using namespace std;

typedef struct{
    int hora;
    int minuto;
}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    Data dataCompromisso;
    Horario horarioCompromisso;
    string texto;
}Compromisso;

int preenche(Compromisso *compromisso){
    cout << "Dia: ";
    cin >> compromisso->dataCompromisso.dia;
    cout << endl << "Mes: ";
    cin >> compromisso->dataCompromisso.mes;
    cout << endl << "Ano: ";
    cin >> compromisso->dataCompromisso.ano;
    cout << endl << "Hora: ";
    cin >> compromisso->horarioCompromisso.hora;
    cout << endl << "Minuto: ";
    cin >> compromisso->horarioCompromisso.minuto;
    cout << endl << "Descricao: ";
    cin.get();
    getline(cin, compromisso->texto);
    cout << endl;
    return 1;
}

void imprime(Compromisso *compromisso){
    cout << "Data: " << compromisso->dataCompromisso.dia << " / " << compromisso->dataCompromisso.mes << " / " << compromisso->dataCompromisso.ano << endl;
    cout << "Horario: " << compromisso->horarioCompromisso.hora << ":" << compromisso->horarioCompromisso.minuto << endl;
    cout << "Descricao: " << compromisso->texto;
}

int main(){
    int N = 0;
    char continua;
    Compromisso agenda[1000];

    do{
        N += preenche(&agenda[N]);
        cout << "Continua?" << endl;
    }while(cin >> continua && continua == 'S');

    cout << "Agenda de Guilherme" << endl << endl;
    for (int i = 0; i < N; i++){
        imprime(&agenda[i]);
        cout << endl;
    }

    return 0;
}