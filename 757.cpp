#include <iostream>

int main() {
    long long c, h, o; std::cin >> c >> h >> o;
    std::cout << std::min(std::min(c / 2, h / 6), o);
}