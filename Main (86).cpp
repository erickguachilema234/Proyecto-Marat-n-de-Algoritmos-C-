#include <iostream>
using namespace std;

void intercambiar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    intercambiar(&a, &b);
    cout << "A: " << a << " B: " << b;
    return 0;
}