#include <iostream>
using namespace std;

int main() {
    int a[5], menor;
    for (int i = 0; i < 5; i++) cin >> a[i];
    menor = a[0];
    for (int i = 1; i < 5; i++)
        if (a[i] < menor) menor = a[i];
    cout << "Menor: " << menor;
    return 0;
}