#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>

std::string str;
std::set<std::string> aaa;
std::vector<std::string> bbb;

void solve(std::string cur = "", std::string rem = str) {
    if (cur.size() == str.size()) {
        //std::cout << cur << "\n";
        if (!aaa.count(cur)) {
            bbb.push_back(cur);
        }
        aaa.insert(cur);
    }
    
    for (int i = 0; i < rem.size(); i++) {
        std::string tmp = rem;
        tmp.erase(i, 1);
        solve(cur + rem[i], tmp);
    }
}

int main() {
    std::cin >> str;
    std::sort(str.begin(), str.end());
    solve();
    std::cout << bbb.size() << "\n";
    for (int i = 0; i < bbb.size(); i++) {
        std::cout << bbb[i] << "\n";
    }
    return 0;
}