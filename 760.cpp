#include <iostream>
#include <iomanip>

int main() {
    std::ios::sync_with_stdio(false);
    int n, v, l; std::cin >> n >> v >> l;
    double time = static_cast<double>(l) / v * 60;
    for (int i = 0; i < n; ++i) {
        int x, t; std::cin >> x >> t;
        if (x <= l) time += t;
    }
    std::cout << std::fixed << std::setprecision(2) << time;
}