#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    int a , b , c;
    cin >> a >> b >> c;

    int *** v = new(nothrow) int**[a];
    for (int i = 0; i < a; i++) {
        v[i] = new(nothrow) int*[b];

        for (int j = 0; j < b; j++) {
            v[i][j] = new(nothrow) int[c];
        }
    }
    
    
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            for (int k = 0; k < c; k++) {
                v[i][j][k] = rand() % (0 - 10);
            }
        }
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            for (int k = 0; k < c; k++) {
                cout << setw(2) << v[i][j][k];
            }
            cout <<endl;
        }
        cout <<endl;
    }
}