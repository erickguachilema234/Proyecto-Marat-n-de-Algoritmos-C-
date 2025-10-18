#include <iostream>
#include <string>
using namespace std;

int main() {
    string contrasena, ingreso;
    contrasena = "programacion123";
    cout << "Ingrese la contraseña: ";
    cin >> ingreso;
    if (ingreso == contrasena)
        cout << "Acceso permitido." << endl;
    else
        cout << "Contraseña incorrecta." << endl;
    return 0;
}