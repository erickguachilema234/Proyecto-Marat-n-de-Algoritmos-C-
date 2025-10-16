#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad en años: ";
    cin >> edad;
    int dias = edad * 365;
    cout << "Has vivido aproximadamente " << dias << " dias." << endl;
    return 0;
}