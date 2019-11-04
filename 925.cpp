#include <algorithm>
#include <iostream>

int main() {
    int min_or_max; std::cin >> min_or_max;
    int n, a, b, c; std::cin >> n >> a >> b >> c;
    if (min_or_max == 1) {
        // min count
        // n - (n - a) - (n - b) - (n - c) = a + b + c - 2 * n
        std::cout << std::max(0, a + b + c - 2 * n);
    } else {
        std::cout << std::min(std::min(a, b), c);
    }
}