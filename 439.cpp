#include <iostream>
#include <iomanip>

int main() {
    double n, p; std::cin >> n >> p;
    // 1/((1-P)+(P/N)
    // 1 / (P + ((1-P)/ N))
    std::cout << std::fixed << std::setprecision(9) << 100.0 / (p + ((100.0 - p) / n));
}