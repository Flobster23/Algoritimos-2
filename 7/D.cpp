#include <iostream>
#include <ctime>

using namespace std;

typedef struct{
    char num;
    char naipe;
}carta;

void sortear(carta cartasJ[4]){
    srand(time(NULL));
    for(int i = 0; i < 4; i++){
        int j = (rand() % 13) + 1;
        if(j == 1){
            cartasJ[i].num = 'A';
        }
        if(j == 11){
            cartasJ[i].num = 'J';
        }
        if(j == 12){
            cartasJ[i].num = 'Q';
        }
        if(j == 13){
            cartasJ[i].num = 'K';
        }else{
            cartasJ[i].num = j + 48;
        }
        cout << " " << j;
    }
    for(int i = 0; i < 4; i++){
        int j = rand() % 4;
        if(j == 0){
            cartasJ[i].naipe = 3;
        }
        if(j == 1){
            cartasJ[i].naipe = 4;
        }
        if(j == 2){
            cartasJ[i].naipe = 5;
        }
        if(j == 3){
            cartasJ[i].naipe = 6;
        }
    }
    for(int i = 0; i < 4; i++){
        cout << cartasJ[i].num << cartasJ[i].naipe << endl;
    }
}

int main(){
    carta cartasJ1[4], cartasJ2[4];
    sortear(cartasJ1);
    cout << endl;
    sortear(cartasJ2);
}