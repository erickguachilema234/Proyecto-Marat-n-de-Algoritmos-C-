#include <iostream>
using namespace std;

int contarLetra(string s, char letra) {
    int c = 0;
    for (char ch : s)
        if (tolower(ch) == tolower(letra))
            c++;
    return c;
}

int main() {
    string palabra;
    char l;
    getline(cin, palabra);
    cin >> l;
    cout << "La letra '" << l << "' aparece " << contarLetra(palabra, l) << " veces.";
    return 0;
}
