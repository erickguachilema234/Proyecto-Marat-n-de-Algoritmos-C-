#include <iostream>
using namespace std;

void swapValores(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cin >> x >> y;
    swapValores(&x, &y);
    cout << x << " " << y;
    return 0;
}