#include <iostream>
using namespace std;

int sumar(int* arr, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += *(arr + i);
    return suma;
}

int main() {
    int numeros[5];
    for (int i = 0; i < 5; i++)
        cin >> numeros[i];
    cout << "Suma: " << sumar(numeros, 5);
    return 0;
}