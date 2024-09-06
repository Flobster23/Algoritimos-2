#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void extremos(vector <int> a) {
    vector<int>::iterator i;
    for(i = a.begin(); i != a.end(); i++){
        sort(a.begin(), a.end(), greater<int>());
    }
    cout << "maior número do vetor: " << *(a.begin()) << endl;
    cout << endl;
    cout << "menor número do vetor: " << *(a.end() - 1) << endl;
}

void media(vector <int> a){
    vector<int>::iterator i;
    float soma = 0;
    int d = 0;
    for(i = a.begin(); i != a.end(); i++){
        soma += *i;
        d++;
    }
    cout << "media dos elementos do vetor: " << soma / d << endl;
}

void positivos(vector <int> a){
    int soma = 0;
    vector<int>::iterator i;
    for(i = a.begin(); i != a.end(); i++){
        if(*i >= 0){
            soma++;
        }
    }
    cout << "N° de elementos positivos no vetor: " << soma << endl;
}

int main(){
    vector <int> v;
    int N;
    cin >> N;
    cout << endl;
    
    for(int j = 0; j < N; j++){
        int valor;
        cin >> valor;
        v.push_back(valor);
    }
    
    cout << endl;
    
    extremos(v);
    
    cout << endl;
    
    media(v);
    
    cout << endl;
    
    positivos(v);
    
    return 0;
}