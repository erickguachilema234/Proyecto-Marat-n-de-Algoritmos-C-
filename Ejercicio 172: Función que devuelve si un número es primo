#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int num;
    cin >> num;
    cout << (esPrimo(num) ? "Es primo" : "No es primo");
    return 0;
}
