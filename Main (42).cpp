#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    if (a > b)
        cout << a << " es mayor." << endl;
    else if (b > a)
        cout << b << " es mayor." << endl;
    else
        cout << "Ambos numeros son iguales." << endl;
    return 0;
}