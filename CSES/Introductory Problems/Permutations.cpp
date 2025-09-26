#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n <= 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    cout << n / 2 + 1 << " ";
    for (int i = 0; i < n / 2; i++) {
        cout << i + 1 << " ";
        if (n - i != n / 2 + 1) {
            cout << n - i << " ";
        }
    }
    return 0;
}