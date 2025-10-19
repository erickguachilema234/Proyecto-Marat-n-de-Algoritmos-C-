#include <iostream>
using namespace std;

int main() {
    int arr[5], temp;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    cout << "Ordenado: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
