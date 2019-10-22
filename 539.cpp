#include <iostream>

int main() {
    int n; std::cin >> n;
    std::cout << (n == 1 ? 0 : (n & 1) ? n : n / 2);
}