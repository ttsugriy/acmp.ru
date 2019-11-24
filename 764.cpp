#include <algorithm>
#include <iostream>
#include <cmath>
#include <unordered_map>

int main() {
    int n; std::cin >> n;
    std::unordered_map<double, int> counts;
    int max_count = 0;
    for (int i = 0; i < n; ++i) {
        int x, y; std::cin >> x >> y;
        counts[atan2(y, x)] += 1;
        max_count = std::max(max_count, counts[atan2(y, x)]);
    }
    std::cout << max_count;
}