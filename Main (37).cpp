#include <iostream>
using namespace std;

float promedio(float* a, int n) {
    float suma = 0;
    for (int i = 0; i < n; i++)
        suma += *(a + i);
    return suma / n;
}

int main() {
    float notas[5];
    for (int i = 0; i < 5; i++) cin >> notas[i];
    cout << promedio(notas, 5);
    return 0;
}
