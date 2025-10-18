#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    if (isupper(letra))
        cout << "La letra es mayuscula." << endl;
    else if (islower(letra))
        cout << "La letra es minuscula." << endl;
    else
        cout << "No es una letra." << endl;
    return 0;
}
