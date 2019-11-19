#include <algorithm>
#include <iostream>
#include <numeric>

int main() {
    int max_even = std::numeric_limits<int>::min();
    int min_odd = std::numeric_limits<int>::max();
    int n;
    for (int i = 1; std::cin >> n; ++i) {
        if (i % 2 == 0) {
            max_even = std::max(max_even, n);
        } else {
            min_odd = std::min(min_odd, n);
        }
    }
    std::cout << (max_even + min_odd);
}