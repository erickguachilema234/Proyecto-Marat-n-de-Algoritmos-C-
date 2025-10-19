#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2)
        suma += i;

    cout << "La suma de pares es: " << suma << endl;
    return 0;
}