#include <iostream>

int main() {
    int n, m, k; std::cin >> n >> m >> k;
    if (k <= 2) { // cannot fit enough adults
        if (n == 0) std::cout << (m + k - 1) / k; else std::cout << 0;
        return 0;
    }
    const int max_kids_per_bus = k - 2;
    const int min_buses_for_kids = (n + max_kids_per_bus - 1) / max_kids_per_bus;
    if (min_buses_for_kids * 2 > m) { // not enough adults
        std::cout << 0;
        return 0;
    }
    std::cout << (n + m + k - 1) / k;
}