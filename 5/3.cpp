#include <string>
#include <iostream>

using namespace std;

int soma10(int a){
    a += 10;
    return(a);
}

int main(){
    int x;
    cin >> x;
    
    cout << soma10(x) << endl;

    return 0;
}