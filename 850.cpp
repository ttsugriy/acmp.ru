#include <iostream>

int main() {
    int a, b; std::cin >> a >> b;
    std::cout << ((std::max(a, b) + 1) / 2) << ' ' << (std::min(a, b));
}