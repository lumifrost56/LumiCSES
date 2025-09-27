#include <iostream>
#include <cmath>
using namespace std;

int n, r, p;

int main() {
    cin >> n;
    for (int i = 1; i < 100; i++) {
        p = pow(5, i);
        if (p <= n) {
            r += n / p;
        } else {
            break;
        }
    }
    cout << r;
    return 0;
}