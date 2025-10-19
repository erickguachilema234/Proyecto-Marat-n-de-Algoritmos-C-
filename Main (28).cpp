#include <iostream>
using namespace std;

int potencia(int base, int exp) {
    int resultado = 1;
    for (int i = 0; i < exp; i++)
        resultado *= base;
    return resultado;
}

int main() {
    int b, e;
    cout << "Base y exponente: ";
    cin >> b >> e;
    cout << "Potencia: " << potencia(b, e) << endl;
    return 0;
}