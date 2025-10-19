#include <iostream>
using namespace std;

int main() {
    int arr[10], suma = 0;
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    for (int i = 1; i < 10; i += 2)
        suma += arr[i];

    cout << "Suma en posiciones impares: " << suma;
    return 0;
}