#include <iostream>
#include <cmath>

int sqr_dist(int x1, int y1, int x2, int y2) {
    return std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2);
}

int main() {
    int n, x, y, l; std::cin >> n >> x >> y >> l;
    int sqr_l = l * l;
    for (int i = 1; i <= n; ++i) {
        int cx, cy; std::cin >> cx >> cy;
        if (sqr_dist(x, y, cx, cy) <= sqr_l) {
            std::cout << i; 
            return 0;
        }
    }
    std::cout << "Yes";
}