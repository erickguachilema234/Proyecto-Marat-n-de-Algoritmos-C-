#include <iostream>
using namespace std;

int main() {
    int m[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> m[i][j];
    cout << "Diagonal principal: ";
    for (int i = 0; i < 3; i++)
        cout << m[i][i] << " ";
    return 0;
}