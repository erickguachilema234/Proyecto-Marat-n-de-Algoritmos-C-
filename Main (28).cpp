#include <iostream>
using namespace std;

int main() {
    int arr[10], buscado, encontrado = 0;
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Numero a buscar: ";
    cin >> buscado;

    for (int i = 0; i < 10; i++)
        if (arr[i] == buscado) encontrado = 1;

    if (encontrado)
        cout << "Numero encontrado.";
    else
        cout << "No se encontro.";
    return 0;
}