#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num >= 10 && num <= 50)
        cout << "El numero esta dentro del rango." << endl;
    else
        cout << "El numero esta fuera del rango." << endl;
    return 0;
}
