#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter steps: ";
    cin >> n;

    int a = 1, b = 2, c;

    if (n <= 2) {
        cout << n;
    }
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << b;
    }

    return 0;
}
