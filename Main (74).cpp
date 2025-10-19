#include <iostream>
using namespace std;

int sumaHastaN(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++)
        suma += i;
    return suma;
}

int main() {
    int n;
    cin >> n;
    cout << "Suma: " << sumaHastaN(n);
    return 0;
}
