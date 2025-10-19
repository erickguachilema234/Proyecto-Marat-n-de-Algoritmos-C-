#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> a[i];
        b[i] = a[i];
    }

    cout << "Arreglo copiado: ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    return 0;
}