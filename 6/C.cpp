#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void maior(vector <int> a) {
    vector<int>::iterator i;
    for(i = a.begin(); i != a.end(); i++){
        sort(a.begin(), a.end(), greater<int>());
    }
    cout << *(a.end() - 1) << endl;
}

int main(){
    vector <int> v;
    vector<int>::iterator i;
    int N;
    cin >> N;
    
    for(int j = 0; j < N; j++){
        int valor;
        cin >> valor;
        v.push_back(valor);
    }
    
    maior(v);
    
    return 0;
}