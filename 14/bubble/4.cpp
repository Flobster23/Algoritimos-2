#include <iostream>

using namespace std;

int bubbleSort(int v[], int n){
    if(n == 1)
        return 1;
    
    for(int i = 0; i < n - 1; i++)
        if(v[i] > v[i + 1])
            swap(v[i], v[i + 1]);

    return bubbleSort(v, n - 1);    
}

int main(){
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    bubbleSort(v, n);

    for(int i = 0; i < n; i++)
        cout << v[i] << ", ";
    
    cout << endl;
    return 0;
}