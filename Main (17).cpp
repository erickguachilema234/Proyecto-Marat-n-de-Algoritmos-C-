#include <iostream>
using namespace std;

int main() {
    int num, cont = 0, suma = 0;
    do {
        cout << "Ingrese un numero (-1 para terminar): ";
        cin >> num;
        if (num != -1) {
            suma += num;
            cont++;
        }
    } while (num != -1);

    if (cont > 0)
        cout << "Promedio: " << (float)suma / cont;
    else
        cout << "No se ingresaron numeros.";

    return 0;
}