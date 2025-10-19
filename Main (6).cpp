#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    for (int i = 1; i <= 100; i++)
        if (i % 2 != 0) suma += i;
    cout << "Suma de impares: " << suma;
    return 0;
}