#include <iostream>
using namespace std;

long long int n, r = 1, i = 1, x = 2, y = 1, a[100], b[100], mod = 1000000007;

int main() {
    cin >> n;
    //cout << 0 << " " << 1 << endl;
    a[0] = 0;
    b[0] = 1;
    //cout << 1 << " " << 2 << endl;
    a[1] = 1;
    b[1] = 2;
    while (y*2 < n) {
        x = (x * x) % mod;
        y *= 2;
        i++;
        a[i] = y;
        b[i] = x;
        //cout << y << " " << x << endl;
    }
    while (n) {
        if (a[i] <= n) {
            n -= a[i];
            r = (r * b[i]) % mod;
        } else {
            i--;
        }
    }
    cout << r;
    return 0;
}