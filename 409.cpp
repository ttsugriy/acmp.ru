#include <iostream>
#include <iomanip>

int main() {
    int n; std::cin >> n;
    int prev; std::cin >> prev;
    double area = 0;
    for (int i = 1; i < n; ++i) {
        int height; std::cin >> height;
        area += (height + prev) / 2.0;
        prev = height;
    }
    std::cout << std::fixed << std::setprecision(6) << area / (n-1);
}