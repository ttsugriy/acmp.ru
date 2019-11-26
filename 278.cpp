#include <iostream>
#include <string>

bool evolved(const std::string& s, const std::string& t) {
    int si = 0;
    for (int ti = 0; si < s.size(); ) {
        if (ti == t.size()) return false;
        if (s[si] == t[ti]) {
            si += 1; ti += 1;
        } else {
            ti += 1;
        }
    }
    return si == s.size();
}

int main() {
    std::string s, t; std::cin >> s >> t;
    std::cout << (evolved(s, t) ? "YES" : "NO");
}