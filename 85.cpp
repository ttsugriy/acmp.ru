#include <iostream>

int gcd(int x, int y) {
    while (y != 0) {
        int tmp = x % y;
        x = y;
        y = tmp;
    }
    return x;
}

int main() {
    int n, m; std::cin >> n >> m;
    int ones = gcd(n, m);
    for (int i = 0; i < ones; ++i) std::cout << 1;
}