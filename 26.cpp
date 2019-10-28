#include <iostream>

static inline int square(int x) { return x * x; }

int main() {
    int x1, y1, r1; std::cin >> x1 >> y1 >> r1;
    int x2, y2, r2; std::cin >> x2 >> y2 >> r2;
    int dist_squared = square(x1 - x2) + square(y1 - y2);
    std::cout << (dist_squared > square(r1 + r2) || square(r1 - r2) > dist_squared ? "NO" : "YES");
}