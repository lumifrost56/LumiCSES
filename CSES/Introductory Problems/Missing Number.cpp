#include <iostream>
using namespace std;

long long int n, s, a;

int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> a;
        s += a;
    }
    cout << n * (n + 1) / 2 - s;
    return 0;
}