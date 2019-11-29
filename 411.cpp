#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double a, b, c; std::cin >> a >> b >> c;
    if (a == 0 && b == 0 && c == 0) {
        std::cout << -1;
        return 0;
    }
    if (a == 0 && b == 0 && c != 0) {
        std::cout << 0;
        return 0;
    }
    std::cout << std::fixed << std::setprecision(6);
    if (a == 0 && b != 0) {
        std::cout << 1 << std::endl << (-c / b);
        return 0;
    }
    double d = b * b - 4 * a * c;
    if (d < 0) {
        std::cout << 0;
    } else if (d == 0) {
        std::cout << 1 << std::endl << (-b + std::sqrt(d)) / (2 * a);
    } else {
        std::cout << 2 << std::endl << (-b - std::sqrt(d)) / (2 * a) << ' ' << (-b + std::sqrt(d)) / (2 * a);
    }
}