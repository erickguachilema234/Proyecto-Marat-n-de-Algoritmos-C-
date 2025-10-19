#include <iostream>
using namespace std;

void tabla(int n) {
    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n * i << endl;
}

int main() {
    int n;
    cin >> n;
    tabla(n);
    return 0;
}