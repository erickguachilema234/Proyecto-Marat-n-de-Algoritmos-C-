#include <iostream>
using namespace std;

float promedio(float arr[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++)
        suma += arr[i];
    return suma / n;
}

int main() {
    int n;
    cout << "Cantidad de notas: ";
    cin >> n;
    float notas[n];
    for (int i = 0; i < n; i++)
        cin >> notas[i];
    cout << "Promedio: " << promedio(notas, n) << endl;
    return 0;
}
