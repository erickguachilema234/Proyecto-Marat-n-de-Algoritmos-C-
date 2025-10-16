#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;
    double promedio = (a + b + c) / 3;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}