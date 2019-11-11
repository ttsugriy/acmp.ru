#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int n; std::cin >> n;
    int prev_x = 0;
    int prev_y = 0;
    double total_dist = 0;
    for (int i = 0; i < n; ++i) {
        int x, y; std::cin >> x >> y;
        total_dist += hypot(x - prev_x, y - prev_y);
        prev_x = x;
        prev_y = y;
    }
    total_dist += hypot(0 - prev_x, 0 - prev_y);
    std::cout << std::fixed << std::setprecision(3) << total_dist;
}