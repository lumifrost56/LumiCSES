#include <iostream>
using namespace std;

long long int n, a, l, r;

int main() {
    cin >> n;
    cin >> l;
    for (int i = 1; i < n; i++) {
        cin >> a;
        if (a < l) {
            r += l - a;
        } else {
            l = a;
        }
    }
    cout << r;
    return 0;
}