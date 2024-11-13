#include <iostream>

using namespace std;

int buscarIndices(int v[], int n, int *pi, int *pf, int num){
    while(pi != pf){
        if(*pi + *pf == num){
            return 1;
        }else{
            if(*pi + *pf > num){
                pi++;
            }else{
                pf--;
            }
        }
        
        
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int v[n];
    int *pi = v, *pf = &v[n], *inicio = v, num;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> num;
    int res = buscarIndices(v, n, pi, pf, num);
    if(res = -1){
        cout << "A soma nao existe" << endl;
    }else{
        cout << "Indices: " << pi - inicio <<  ", " << pf - inicio << endl;
    }
}
  