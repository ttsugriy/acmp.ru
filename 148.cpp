#include <iostream>

int gcd(int x, int y) {
    return x ? gcd(y % x, x) : y;
}

int main() {
    int a, b; std::cin >> a >> b;
    std::cout << gcd(a, b);
}