#include <algorithm>
#include <iostream>

int main() {
    int n; std::cin >> n;
    int counts[101] = {0};
    for (int i = 0; i < n; ++i) {
        int color; std::cin >> color;
        counts[color] += 1;
    }
    auto max_count = std::max_element(counts, counts + 101);
    auto max_count_count = std::count(counts, counts + 101, *max_count);
    std::cout << (max_count_count == 1 ? std::distance(counts, max_count) : 0);
}