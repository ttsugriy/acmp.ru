#include <iostream>

int main() {
    int n, w, d, p; std::cin >> n >> w >> d >> p;
    int gold_weight = (n - 1) * n / 2 * w;
    if (gold_weight == p) {
        std::cout << n;
    } else {
        std::cout << (gold_weight - p) / d;
    }
}