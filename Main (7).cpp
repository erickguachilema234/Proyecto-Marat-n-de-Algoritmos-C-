#include <iostream>
using namespace std;

int main() {
    int n, buscar, encontrado = 0;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Ingrese numero a buscar: ";
    cin >> buscar;

    for (int i = 0; i < n; i++)
        if (arr[i] == buscar)
            encontrado = 1;

    if (encontrado)
        cout << "Numero encontrado." << endl;
    else
        cout << "Numero no encontrado." << endl;

    return 0;
}