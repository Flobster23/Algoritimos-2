#include <iostream>
#include <iomanip>

using namespace std;

int num = 2;

void dobroTriplo(){
    if(num % 2 == 0){
        num *= 2;
    }else{
        num *= 3;
    }
    
    cout << num << endl;
}

int main(){
   dobroTriplo();
   cout << num;
}