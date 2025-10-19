#include <iostream>
using namespace std;

int main() {
    int num, suma = 0;
    do {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> num;
        suma += num;
    } while (num != 0);

    cout << "La suma total es: " << suma << endl;
    return 0;
}
