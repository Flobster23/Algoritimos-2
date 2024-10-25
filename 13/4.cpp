#include <iostream>
#include <map>

using namespace std;

map <int, int> memoria;

int tribonnaci(int n){
    if(n < 2){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    if(memoria.find(n) != memoria.end()){
        return memoria[n];
    }
    memoria[n] = tribonnaci(n - 1) + tribonnaci(n - 2) + tribonnaci(n - 3);
    return memoria[n];
}

int main(){
    int n;
    cin >> n;
    cout << tribonnaci(n) << endl;
}