#include <iostream>
#include <cmath>
using namespace std;

long long int t, x, y, m, c;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> y >> x;
        m = max(x, y);
        c = m * (m - 1) + 1;
        if (x == m) {
            if (m % 2 == 0) {
                cout << c - m + y << endl;
            } else {
                cout << c + m - y << endl;
            }
        } else if (y == m) {
            if (m % 2 == 0) {
                cout << c + m - x << endl;
            } else {
                cout << c - m + x << endl;
            }
        }
    }
    return 0;
}