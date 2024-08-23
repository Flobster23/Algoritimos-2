#include <iostream>
#include <cmath>

using namespace std;

void temperaturaF(){
    int TC, TF;
    
    cin >> TC;
    
    TF = TC * (9/5) + 32;
    
    cout << TF;
}

int main(){
    temperaturaF();

    return 0;
}