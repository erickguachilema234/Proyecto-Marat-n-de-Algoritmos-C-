#include <iostream>
using namespace std;

struct Alumno {
    string nombre;
    float n1, n2, n3;
};

float promedio(Alumno a) {
    return (a.n1 + a.n2 + a.n3) / 3;
}

int main() {
    Alumno a;
    cin >> a.nombre >> a.n1 >> a.n2 >> a.n3;
    cout << "Promedio de " << a.nombre << ": " << promedio(a);
    return 0;
}
