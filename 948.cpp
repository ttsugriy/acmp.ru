#include <iostream>

int main() {
    int k, n; std::cin >> k >> n;
    std::cout << ((n + k - 1) / k) << ' ' << (n % k == 0 ? k : n % k);
}