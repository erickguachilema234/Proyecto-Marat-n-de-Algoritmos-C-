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

int mcm(int a, int b) {
    return (a * b) / mcd(a, b);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "MCM: " << mcm(x, y);
    return 0;
}