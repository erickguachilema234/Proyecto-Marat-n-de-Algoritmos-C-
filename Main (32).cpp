#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int cont = 0;
    for (char c : s)
        if (isupper(c)) cont++;
    cout << "Mayusculas: " << cont;
    return 0;
}