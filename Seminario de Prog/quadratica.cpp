#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;


int main(){
    int n , o;
    cin >> n >> o;

    int** v = new(nothrow) int*[n];
    for (int i = 0; i < n; i++) {
        v[i] = new(nothrow) int[o];
    }

    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < o; j++){
            v[i][j] = rand() % (0 - 10);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < o; j++){
            cout << setw(2) << v[i][j];
        }
        cout <<endl;
    }
}
