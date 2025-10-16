#include <iostream>
using namespace std;

int main() {
    int minutos;
    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;
    int horas = minutos / 60;
    int resto = minutos % 60;
    cout << minutos << " minutos equivalen a " << horas << " horas y " << resto << " minutos." << endl;
    return 0;
}