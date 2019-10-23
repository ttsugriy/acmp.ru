#include <iostream>

int main() {
    int a, b, c, t; std::cin >> a >> b >> c >> t;
    std::cout << (std::min(a, t) * b + std::max(0, t - a) * c);
}