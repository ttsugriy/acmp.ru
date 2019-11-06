#include <iostream>

int main() {
    int x1, y1, x2, y2, x, y; std::cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    if (x1 == x2) {
        std::cout << 2 * x1 - x << ' ' << y;
    } else /* y1 == y2 */ {
        std::cout << x << ' ' << 2 * y1 - y;
    }
}