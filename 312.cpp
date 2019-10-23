#include <iostream>

int main() {
    int a1, a2, n; std::cin >> a1 >> a2 >> n;
    int d = a2 - a1;
    std::cout << (a1 + d * (n - 1));
}