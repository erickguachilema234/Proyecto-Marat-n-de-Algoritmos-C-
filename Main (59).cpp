#include <iostream>
using namespace std;

int main() {
    int mat[3][3], num = 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            mat[i][j] = num++;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}