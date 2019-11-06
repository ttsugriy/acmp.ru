#include <algorithm>
#include <iostream>

int main() {
    int n, s; std::cin >> n >> s;
    int prices[n];
    for (int i = 0; i < n; ++i) std::cin >> prices[i];
    std::sort(prices, prices + n);
    int count = 0;
    for (int i = 0; i < n && prices[i] <= s; s -= prices[i], ++i) {
        count += 1;
    }
    std::cout << count;
}