#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    int vocales = 0;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for (char c : palabra) {
        c = tolower(c);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            vocales++;
    }
    cout << "Cantidad de vocales: " << vocales << endl;
    return 0;
}