#include <iostream>
#include <string>
using namespace std;

string dna;
char last;
int maxc = 1, c = 1;

int main() {
    cin >> dna;
    last = dna[0];
    for (int i = 1; i < dna.size(); i++) {
        if (dna[i] == last) {
            c++;
        } else {
            c = 1;
        }
        if (c > maxc) {
            maxc = c;
        }
        last = dna[i];
    }
    cout << maxc;
    return 0;
}