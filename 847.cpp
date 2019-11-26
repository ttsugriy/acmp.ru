#include <algorithm>
#include <iostream>
#include <string>

bool is_correct(std::string& w1, std::string& w2) {
    if (w1.size() != w2.size()) return false;
    for (int i = 0; i < w1.size(); ++i) {
        if (w1[i] == w2[i]) return false;
    }
    std::sort(w1.begin(), w1.end());
    std::sort(w2.begin(), w2.end());
    return w1 == w2;
}

int main() {
    std::string w1, w2; std::cin >> w1 >> w2;
    std::cout << (is_correct(w1, w2) ? "YES" : "NO");
}