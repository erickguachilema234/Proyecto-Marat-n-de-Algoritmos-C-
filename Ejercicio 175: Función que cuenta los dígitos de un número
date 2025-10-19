#include <iostream>
using namespace std;

int contarDigitos(int n) {
    int cont = 0;
    do {
        cont++;
        n /= 10;
    } while (n != 0);
    return cont;
}

int main() {
    int num;
    cin >> num;
    cout << "Digitos: " << contarDigitos(num);
    return 0;
}
