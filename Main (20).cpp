#include <iostream>
using namespace std;

int main() {
    int a[10], cont = 0;
    for (int i = 0; i < 10; i++) cin >> a[i];
    for (int i = 0; i < 10; i++)
        if (a[i] > 100) cont++;
    cout << "Mayores a 100: " << cont;
    return 0;
}