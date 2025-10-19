#include <iostream>
using namespace std;

int main() {
    int num, i, contador = 0;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num <= 1) {
        cout << "No es primo." << endl;
        return 0;
    }

    for (i = 1; i <= num; i++) {
        if (num % i == 0)
            contador++;
    }

    if (contador == 2)
        cout << "Es un numero primo." << endl;
    else
        cout << "No es primo." << endl;

    return 0;
}
