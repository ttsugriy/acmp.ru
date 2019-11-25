#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int dist(const std::string& x, const std::string& y) {
    int diff = 0;
    for (int i = 0; i < x.size(); ++i) {
        diff += x[i] != y[i];
    }
    return diff;
}

int main() {
    std::string s; std::cin >> s;
    int n; std::cin >> n;
    std::vector<int> msgs;
    int min_dist = s.size() + 1;
    for (int i = 1; i <= n; ++i) {
        std::string m; std::cin >> m;
        int d = dist(s, m);
        if (d < min_dist) {
            msgs.clear();
            min_dist = d;
        }
        if (d == min_dist) {
            msgs.push_back(i);
        }
    }
    std::cout << msgs.size() << std::endl;
    for (int idx : msgs) std::cout << idx << ' ';
}