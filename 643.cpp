#include <iostream>

int main() {
    int n; std::cin >> n;
    std::cout << n + __builtin_popcount(n);
}