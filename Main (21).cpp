#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    cout << "Los numeros son: ";
    for (int i = 0; i < 5; i++)
        cout << numeros[i] << " ";
    return 0;
}