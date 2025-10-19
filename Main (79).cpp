#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int main() {
    int a;
    cin >> a;
    cout << (esBisiesto(a) ? "Bisiesto" : "No bisiesto");
    return 0;
}