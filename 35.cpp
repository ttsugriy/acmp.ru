#include <iostream>

int main() {
    int k; std::cin >> k;
    for (int i = 0; i < k; ++i) {
        int n, m; std::cin >> n >> m;
        std::cout << (19 * m + (n + 239)*(n + 366) / 2) << ' ';
    }
}