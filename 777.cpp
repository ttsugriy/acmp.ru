#include <iostream>

int main() {
    int s, t; std::cin >> s >> t;
    std::cout << ((t + 12 - s) % 12);
}