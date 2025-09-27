#include <iostream>
#include <bitset>
using namespace std;

int n, x, y, a[100000];
string t;
bool con;

void printbitset(string s) {
    for (int i = 16 - n; i < 16; i++) {
        cout << s[i];
    }
    cout << endl;
}

void idek() {
    for (int j = n; j >= 0; j--) {
        for (int i = 0; i < j; i++) {
            y = x;
            y ^= (1 << i);
            if (!a[y]) {
                a[y] = 1;
                t = bitset<16>(y).to_string();
                printbitset(t);
                x = y;
                idek();
                return;
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << 0;
    }
    cout << endl;
    a[0] = 1;
    idek();
    return 0;
}