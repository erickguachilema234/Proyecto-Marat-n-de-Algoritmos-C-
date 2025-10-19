#include <iostream>
using namespace std;

int main() {
    int mat[3][3], suma = 0, cont = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
            suma += mat[i][j];
            cont++;
        }
    cout << "Promedio: " << (float)suma / cont;
    return 0;
}