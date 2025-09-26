#include <iostream>
using namespace std;

long long int n, r, p = 48;

int main() {
    cin >> n;
    if (n >= 1) {
        cout << 0 << endl;
    }
    if (n >= 2) {
        r = 4 * (4 - 1);
        cout << r / 2 << endl;
    }
    if (n >= 3) {
        r = 9 * (9 - 1);
        cout << (r - 16) / 2 << endl;
    }
    if (n >= 4) {
        r = 16 * (16 - 1);
        cout << (r - 48) / 2 << endl;
    }
    for (long long int i = 5; i <= n; i++) {
        r = i*i * (i*i - 1);
        p += 40 + 8 * (2 * i - 9);
        cout << (r - p) / 2 << endl;
    }
    return 0;
}