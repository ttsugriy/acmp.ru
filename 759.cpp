#include <algorithm>
#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    int prices[n]; for (int i = 0; i < n; ++i) std::cin >> prices[i];
    std::sort(prices, prices + n);
    int max_value = 0;
    for (int i = n - 1; i >= 0 && m > 0 && prices[i] > 0; --i, --m) {
        max_value += prices[i];
    }
    std::cout << max_value;
}