#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese los tres lados del triangulo: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "El triangulo es equilatero." << endl;
    else if (a == b || b == c || a == c)
        cout << "El triangulo es isosceles." << endl;
    else
        cout << "El triangulo es escaleno." << endl;

    return 0;
}