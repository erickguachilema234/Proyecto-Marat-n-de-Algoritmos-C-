#include <iostream>
using namespace std;

float celsiusAFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float c;
    cin >> c;
    cout << "Fahrenheit: " << celsiusAFahrenheit(c);
    return 0;
}