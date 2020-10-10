#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>auxiliar(n);
    //Lleno el arreglo
    for(int i = 0; i < n; i++){
        cin >> a[i];

    }
    //Lleno el auxiliar con la suma de los numeros anteriores
    auxiliar[0] = a[0];
     for(int j = 1; j < n; j++){
         auxiliar[j] = auxiliar[j-1]+a[j];

    }
    int consultas;
    cin >> consultas;

    for(int i = 0; i < consultas; i++){
        int a,b;
        cin >> a;
        cin >> b;
        if(a == 0){cout <<  auxiliar[b] << endl;}
        else
            {cout <<  auxiliar[b]- auxiliar[a-1] << endl;}
    }

}
