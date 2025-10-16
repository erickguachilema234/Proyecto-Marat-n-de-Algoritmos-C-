#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;
    double mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    cout << "El numero mayor es: " << mayor << endl;
    return 0;
}