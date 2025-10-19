#include <iostream>
using namespace std;

int main() {
    int mat[3][3], fila;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat[i][j];

    cout << "Ingrese fila (0-2): ";
    cin >> fila;

    for (int j = 0; j < 3; j++)
        cout << mat[fila][j] << " ";
    return 0;
}