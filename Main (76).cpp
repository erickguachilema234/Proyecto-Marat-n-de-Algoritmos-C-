#include <iostream>
using namespace std;

int invertir(int n) {
    int inv = 0;
    while (n > 0) {
        inv = inv * 10 + (n % 10);
        n /= 10;
    }
    return inv;
}

int main() {
    int num;
    cin >> num;
    cout << "Invertido: " << invertir(num);
    return 0;
}