#include <iostream>
#include <cmath>

int main() {
    double r, x, y; std::cin >> r >> x >> y;
    // xi = x * r / (2*R - y)
    std::cout << std::abs(x * r / (2 * r - y));
}