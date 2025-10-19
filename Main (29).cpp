#include <iostream>
using namespace std;

int mayor3(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c ? b : c);
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << mayor3(x, y, z);
    return 0;
}
