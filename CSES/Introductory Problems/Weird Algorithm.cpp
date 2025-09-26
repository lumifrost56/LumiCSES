#include <iostream>
using namespace std;

long long int n;

int main() {
    cin >> n;
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n *= 3;
            n += 1;
        }
        cout << n << " ";
    }
    return 0;
}