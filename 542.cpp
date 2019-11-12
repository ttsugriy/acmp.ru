#include <iostream>

int main() {
    int m; std::cin >> m;
    int reverse = 0;
    for (int tmp = m; tmp > 0; tmp >>= 1) reverse = (reverse << 1) + (tmp & 1);
    std::cout << reverse;
}