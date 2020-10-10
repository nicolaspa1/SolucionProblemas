#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int anterior;
    cin >> anterior;
    int actual;

    for(int i = 0; i < n-1 ; i++){
        cin >> actual;
        if(actual < anterior){
            cout << "Desordenado" << endl;
            return 0;
        }
        anterior = actual;
    }
    cout << "Ordenado";

}