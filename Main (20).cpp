#include <iostream>
using namespace std;

int main() {
    int num, cont = 0;
    do {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> num;
        if (num % 2 == 0 && num != 0)
            cont++;
    } while (num != 0);

    cout << "Cantidad de pares ingresados: " << cont;
    return 0;
}