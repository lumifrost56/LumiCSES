#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

long long int n, a, b;
vector <long long int> onevec;
unordered_set <long long int> oneset;

int main() {
    cin >> n;
    a = n * (n + 1) / 2;
    if (a % 2 == 0) {
        cout << "YES" << endl;
        b = a / 2;
        for (long long int i = n; i > 0; i--) {
            if (b - i >= 0) {
                onevec.push_back(i);
                oneset.insert(i);
                b -= i;
            } else {
                if (b == 0) {
                    break;
                } else {
                    onevec.push_back(b);
                    oneset.insert(b);
                    b -= b;
                    break;
                }
            }
        }
        cout << onevec.size() << endl;
        for (long long int i = 0; i < onevec.size(); i++) {
            cout << onevec[i] << " ";
        }
        cout << endl;
        cout << n - onevec.size() << endl;
        for (long long int i = 1; i <= n; i++) {
            if (!oneset.count(i)) {
                cout << i << " ";
            }
        }
    } else {
        cout << "NO";
    }
    return 0;
}