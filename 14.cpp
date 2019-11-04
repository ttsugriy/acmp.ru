#include <iostream>

int gcd(int x, int y) {
    while (x > 0) {
        int tmp = x;
        x = y % x;
        y = tmp;
    }
    return y;
}

int main() {
    int a, b; std::cin >> a >> b;
    std::cout << (a * b / gcd(a, b));
}