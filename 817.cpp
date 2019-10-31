#include <iostream>

int main() {
    long long n, m, d, k; std::cin >> n >> m >> d >> k;
    std::cout << (n + m) * d * k - n * m * d * d;
}