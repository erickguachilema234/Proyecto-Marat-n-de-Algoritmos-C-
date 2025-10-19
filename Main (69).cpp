#include <iostream>
using namespace std;

float promedio(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    float x, y, z;
    cin >> x >> y >> z;
    cout << "Promedio: " << promedio(x, y, z);
    return 0;
}