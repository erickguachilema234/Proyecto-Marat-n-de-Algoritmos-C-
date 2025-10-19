#include <iostream>
using namespace std;

int main() {
    int m[3][3], cont = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            cin >> m[i][j];
            if (m[i][j] < 0) cont++;
        }
    cout << "Negativos: " << cont;
    return 0;
}