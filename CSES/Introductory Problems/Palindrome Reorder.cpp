#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

string a, b, r, o, m;
unordered_map <char, int> c;
int d, e;

int main() {
    cin >> a;
    for (char ch : a) {
        if (!c[ch]) {
            d++;
            b += ch;
        } else {
            if (c[ch] % 2 == 0) {
                d++;
                e--;
            } else {
                d--;
                e++;
            }
        }
        c[ch]++;
    }
    if (d > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for (char ch : b) {
        if (c[ch] % 2 == 0) {
            r += string(c[ch] / 2, ch);
        } else {
            o = string(c[ch], ch);
        }
    }
    m = r;
    reverse(m.begin(), m.end());
    cout << r + o + m;
    return 0;
}