#include <string>
#include <iostream>

using namespace std;

int multiplicacao(int *a, int *b){
    int m;
    m = *a * *b;
    return(m);
}

int main(){
    int x, y;
    cin >> x >> y;
    
    cout << multiplicacao(&x, &y) << endl;

    return 0;
}