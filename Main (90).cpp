#include <iostream>
#include <sstream>
using namespace std;

int contarPalabras(string frase) {
    string palabra;
    int contador = 0;
    stringstream ss(frase);
    while (ss >> palabra) contador++;
    return contador;
}

int main() {
    string frase;
    getline(cin, frase);
    cout << "Palabras: " << contarPalabras(frase);
    return 0;
}