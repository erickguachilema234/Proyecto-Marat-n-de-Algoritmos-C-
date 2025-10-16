#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string nombre;
    cout << "Ingrese su nombre completo: ";
    getline(cin, nombre);
    transform(nombre.begin(), nombre.end(), nombre.begin(), ::toupper);
    cout << "En mayusculas: " << nombre << endl;
    return 0;
}