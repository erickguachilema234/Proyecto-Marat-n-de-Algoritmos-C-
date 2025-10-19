#include <iostream>
using namespace std;

int main() {
    int n, i = 1, contador = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    while (i <= n) {
        if (i % 2 != 0)
            contador++;
        i++;
    }

    cout << "Cantidad de impares: " << contador << endl;
    return 0;
}