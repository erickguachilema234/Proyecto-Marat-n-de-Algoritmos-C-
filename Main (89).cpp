#include <iostream>
#include <cctype>
using namespace std;

int contarConsonantes(string s) {
    int c = 0;
    for (char ch : s) {
        ch = tolower(ch);
        if (isalpha(ch) && !(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            c++;
    }
    return c;
}

int main() {
    string palabra;
    getline(cin, palabra);
    cout << "Consonantes: " << contarConsonantes(palabra);
    return 0;
}