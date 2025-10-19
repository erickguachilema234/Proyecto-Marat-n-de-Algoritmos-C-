#include <iostream>
using namespace std;

void naturales(int n) {
    for (int i = 1; i <= n; i++)
        cout << i << " ";
}

int main() {
    int n;
    cin >> n;
    naturales(n);
    return 0;
}