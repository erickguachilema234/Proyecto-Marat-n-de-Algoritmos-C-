#include <iostream>
using namespace std;

int main() {
    int a[5], suma = 0, mayor, menor;
    for (int i = 0; i < 5; i++) cin >> a[i];
    mayor = menor = a[0];
    for (int i = 0; i < 5; i++) {
        suma += a[i];
        if (a[i] > mayor) mayor = a[i];
        if (a[i] < menor) menor = a[i];
    }
    cout << "Media: " << suma / 5.0 << "\nMayor: " << mayor << "\nMenor: " << menor;
    return 0;
}