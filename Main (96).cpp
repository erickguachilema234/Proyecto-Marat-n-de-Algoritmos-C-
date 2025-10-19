#include <iostream>
using namespace std;

bool iguales(string a, string b) {
    return a == b;
}

int main() {
    string x, y;
    cin >> x >> y;
    cout << (iguales(x, y) ? "Son iguales" : "Son diferentes");
    return 0;
}
