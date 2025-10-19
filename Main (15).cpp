#include <iostream>
using namespace std;

int main() {
    int n, cont = 0;
    cin >> n;
    do {
        cont++;
        n /= 10;
    } while (n != 0);
    cout << "Cantidad de digitos: " << cont;
    return 0;
}