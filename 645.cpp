#include <algorithm>
#include <iostream>
#include <cmath>

int main() {
    int k; std::cin >> k;
    int min_beauty = INT_MAX;
    int best_h, best_w;
    for (int h = 1; h * h <= k; ++h) {
        int w = k / h;
        int beauty = std::abs(h - w) + k - h * w;
        if (beauty < min_beauty) {
            min_beauty = beauty;
            best_h = h;
            best_w = w;
        }
    }
    std::cout << best_h << ' ' << best_w;
}