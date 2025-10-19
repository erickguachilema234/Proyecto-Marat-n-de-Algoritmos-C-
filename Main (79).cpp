#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0)
            contador++;
    }
    cout << "Hay " << contador << " multiplos de 5." << endl;
    return 0;
}