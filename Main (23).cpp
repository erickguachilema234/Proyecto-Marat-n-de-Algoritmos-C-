#include <iostream>
using namespace std;

int main() {
    float arr[10], suma = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arr[i];
        suma += arr[i];
    }
    cout << "Promedio: " << suma / 10;
    return 0;
}