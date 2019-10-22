#include <iostream>

int main() {
    int m1, m2, m3; std::cin >> m1 >> m2 >> m3;
    if (std::max(std::max(m1, m2), m3) <= 727 && std::min(std::min(m1, m2), m3) >= 94) {
        std::cout << std::max(std::max(m1, m2), m3);
    } else {
        std::cout << "Error";
    }
}