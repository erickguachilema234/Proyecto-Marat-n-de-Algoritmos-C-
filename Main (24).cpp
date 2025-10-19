#include <iostream>
using namespace std;

bool esPar(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << (esPar(n) ? "Es par" : "Es impar") << endl;
    return 0;
}