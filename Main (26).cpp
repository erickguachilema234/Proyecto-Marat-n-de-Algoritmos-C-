#include <iostream>
using namespace std;

int main() {
    double salarioMensual;
    cout << "Ingrese su salario mensual: ";
    cin >> salarioMensual;
    double salarioAnual = salarioMensual * 12;
    cout << "Su salario anual es: $" << salarioAnual << endl;
    return 0;
}