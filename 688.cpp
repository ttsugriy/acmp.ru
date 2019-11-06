#include <iostream>
#include <cmath>

int main() {
    long long gx, gy, dx, dy, n;
    std::cin >> gx >> gy >> dx >> dy >> n;
    for (int i = 1; i <= n; ++i) {
        long long x, y; std::cin >> x >> y;
        long long gd = std::pow(gx - x, 2) + std::pow(gy - y, 2);
        long long dd = std::pow(dx - x, 2) + std::pow(dy - y, 2);
        if (dd >= 4 * gd) {
            std::cout << i;
            return 0;
        }
    }
    std::cout << "NO";
}