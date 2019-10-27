#include <iostream>

int main() {
    int n, m, k; std::cin >> n >> m >> k;
    std::cout << (m >= k ? (m / k + k - 1) * n : m * n);
}