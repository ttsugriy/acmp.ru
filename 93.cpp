#include <iostream>
#include <string>
#include <vector>

bool has_one_diff(const std::string& w1, const std::string& w2) {
    if (w1.size() != w2.size()) return false;
    int diff = 0;
    for (int i = 0; i < w1.size(); ++i) diff += w1[i] != w2[i];
    return diff == 1;
}

int main() {
    int n; std::cin >> n;
    std::string gods[n];
    for (int i = 0; i < n; ++i) std::cin >> gods[i];
    int m; std::cin >> m;
    std::vector<int> diffs(n);
    for (int i = 0; i < m; ++i) {
        std::string suspect; std::cin >> suspect;
        for (int j = 0; j < n; ++j) {
            diffs[j] += has_one_diff(gods[j], suspect);
        }
    }
    for (int i = 0; i < n; ++i) {
        std::cout << diffs[i] << ' ';
    }
}