#include <iostream>
#include <vector>
#include <algorithm>

long long int n, m = 999999999999999;
std::vector<int> apples;

void solve(long long int a, long long int b, std::vector<int> rem) {
    if (rem.empty()) {
        if (llabs(a - b) < m) {
            m = abs(a - b);
        }
        return;
    }

    std::vector<int> remtmp = rem;
    int v = remtmp[remtmp.size() - 1];
    remtmp.pop_back();
    solve(a + v, b, remtmp);

    remtmp = rem;
    v = remtmp[remtmp.size() - 1];
    remtmp.pop_back();
    solve(a, b + v, remtmp);
}

int main() {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        std::cin >> t;
        apples.push_back(t);
    }
    std::sort(apples.begin(), apples.end());
    solve(0, 0, apples);
    std::cout << m << "\n";
    return 0;
}