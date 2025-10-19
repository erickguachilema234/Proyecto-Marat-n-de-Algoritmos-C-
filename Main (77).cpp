#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "MCD: " << mcd(x, y);
    return 0;
}