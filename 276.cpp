#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    int k = n / m;
    int rem = n - k * m;
    for (int i = 0; i < m; ++i) {
        std::cout << k + (i >= m - rem) << ' ';
    }
}