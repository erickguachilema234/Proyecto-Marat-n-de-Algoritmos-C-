#include <iostream>
using namespace std;

int cubo(int n) {
    return n * n * n;
}

int main() {
    int num;
    cin >> num;
    cout << "Cubo: " << cubo(num);
    return 0;
}