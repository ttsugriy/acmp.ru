#include <algorithm>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    int n; std::cin >> n;
    int xs[n];
    int sum = 0;
    int pos_count = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> xs[i];
        sum += xs[i];
        pos_count += xs[i] >= 0;
    }
    std::cout << (sum >= 0 ? pos_count : n - pos_count) << std::endl;
    for (int i = 0; i < n; ++i) {
        if (sum < 0 == xs[i] < 0) std::cout << i + 1 << ' ';
    }
}