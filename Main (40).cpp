#include <iostream>
using namespace std;

int main() {
    int arr[5], temp;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    temp = arr[0];
    arr[0] = arr[4];
    arr[4] = temp;

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
