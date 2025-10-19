#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Posiciones pares: ";
    for (int i = 0; i < 10; i += 2)
        cout << arr[i] << " ";
    return 0;
}