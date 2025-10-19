#include <iostream>
using namespace std;

int longitud(const char* cad) {
    int i = 0;
    while (cad[i] != '\0') i++;
    return i;
}

int main() {
    char palabra[100];
    cin.getline(palabra, 100);
    cout << "Longitud: " << longitud(palabra);
    return 0;
}
