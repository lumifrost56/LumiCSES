#include <iostream>
using namespace std;

int t, a, b;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        if ((a + b) % 3 != 0) {
            cout << "NO" << endl;
        } else {
            if (((a + b) / 3) < (max(a, b) - min(a, b))) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}