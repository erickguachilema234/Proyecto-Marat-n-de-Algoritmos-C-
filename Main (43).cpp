#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una cadena: ";
    getline(cin, texto);
    reverse(texto.begin(), texto.end());
    cout << "Texto invertido: " << texto << endl;
    return 0;
}