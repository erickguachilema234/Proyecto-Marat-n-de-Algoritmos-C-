#include <iostream>
using namespace std;

float promedio(float* notas, int n) {
    float suma = 0;
    for (int i = 0; i < n; i++)
        suma += *(notas + i);
    return suma / n;
}

int main() {
    float notas[4];
    for (int i = 0; i < 4; i++)
        cin >> notas[i];
    cout << "Promedio: " << promedio(notas, 4);
    return 0;
}