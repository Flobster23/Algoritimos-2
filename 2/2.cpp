#include <iostream>
#include <ctime>

using namespace std;

//Uma função que não possui retorno sempre será do tipo void

void bom_dia();
int aleat();
int dobro(int);
void mostra_dobro(int);

int main(){
	int x, num;
 
	bom_dia();
	cout << aleat();
	x = aleat(); 	 
	num += dobro(x);
	if (dobro(x) > dobro(aleat())){
    		mostra_dobro(x);
	}
	return 0;
}

void bom_dia(){
    cout << "Bom dia!" << endl;
}

int aleat(){
    srand(time(NULL));
    return(rand());
}

int dobro(int valor){
    return(valor * 2);
}

void mostra_dobro(int valor){
    cout << valor << endl;
}