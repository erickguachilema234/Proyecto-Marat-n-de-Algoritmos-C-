#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad >= 18)
        cout << "Puede votar." << endl;
    else
        cout << "No puede votar." << endl;
    return 0;
}
