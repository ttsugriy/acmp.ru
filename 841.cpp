#include <iostream>

int main() {
    int n; std::cin >> n;
    // http://oeis.org/A014206
    // http://mathworld.wolfram.com/PlaneDivisionbyCircles.html
    std::cout << (n == 0 ? 1 : n * n - n + 2);
}