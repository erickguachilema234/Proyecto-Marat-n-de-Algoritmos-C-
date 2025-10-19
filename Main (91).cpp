#include <iostream>
#include <cctype>
using namespace std;

string aMayusculas(string s) {
    for (char &c : s)
        c = toupper(c);
    return s;
}

int main() {
    string texto;
    getline(cin, texto);
    cout << aMayusculas(texto);
    return 0;
}
