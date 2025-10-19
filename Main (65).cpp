#include <iostream>
using namespace std;

bool esPar(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    cin >> num;
    if (esPar(num)) cout << "Es par";
    else cout << "Es impar";
    return 0;
}
