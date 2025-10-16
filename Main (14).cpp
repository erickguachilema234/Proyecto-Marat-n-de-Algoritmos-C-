#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Ingrese grados Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << "°C equivalen a " << fahrenheit << "°F" << endl;
    return 0;
}
