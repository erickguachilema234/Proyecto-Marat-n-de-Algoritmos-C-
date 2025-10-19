#include <iostream>
using namespace std;

int main() {
    int mat[3][3], trans[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat[i][j];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            trans[j][i] = mat[i][j];

    cout << "Matriz transpuesta:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << trans[i][j] << " ";
        cout << endl;
    }
    return 0;
}
