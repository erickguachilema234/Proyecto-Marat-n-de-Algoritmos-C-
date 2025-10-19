#include <iostream>
using namespace std;

int main() {
    int n, i = 1, cont = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    while (i <= n) {
        if (i % 2 != 0)
            cont++;
        i++;
    }

    cout << "Cantidad de impares: " << cont;
    return 0;
}