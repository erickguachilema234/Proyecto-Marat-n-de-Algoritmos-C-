#include <iostream>
using namespace std;

int main() {
    int arr[5], mayor;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arr[i];
    }
    mayor = arr[0];
    for (int i = 1; i < 5; i++)
        if (arr[i] > mayor) mayor = arr[i];

    cout << "El mayor es: " << mayor;
    return 0;
}