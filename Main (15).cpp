#include <iostream>
using namespace std;

int main() {
    double fahrenheit;
    cout << "Ingrese grados Fahrenheit: ";
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5/9;
    cout << fahrenheit << "°F equivalen a " << celsius << "°C" << endl;
    return 0;
}