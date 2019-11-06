#include <algorithm>
#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    int min_gap = m;
    for (int i = 0; i < n; ++i) {
        int gap_count = 0;
        char cell;
        for (int j = 0; j < m; ++j) {
            std::cin >> cell;
            gap_count += cell == '.';
        }
        min_gap = std::min(min_gap, gap_count);
    }
    std::cout << min_gap;
}