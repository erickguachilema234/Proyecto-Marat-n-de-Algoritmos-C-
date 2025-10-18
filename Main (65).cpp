#include <iostream>
using namespace std;

int main() {
    char turno;
    cout << "Ingrese su turno (M=mañana, T=tarde, N=noche): ";
    cin >> turno;

    switch (toupper(turno)) {
        case 'M': cout << "Buenos dias, buen turno de mañana." << endl; break;
        case 'T': cout << "Buenas tardes, turno de la tarde." << endl; break;
        case 'N': cout << "Buenas noches, turno nocturno." << endl; break;
        default: cout << "Turno invalido." << endl;
    }

    return 0;
}