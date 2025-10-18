#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (a == b)
        cout << "Los numeros son iguales." << endl;
    else
        cout << "Los numeros son diferentes." << endl;

    return 0;
}