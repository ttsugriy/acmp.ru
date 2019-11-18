#include <iostream>

int gcd(int x, int y) {
    while (y) {
        int rem = x % y;
        x = y;
        y = rem;
    }
    return x;
}

int main() {
    int n, m; std::cin >> n >> m;
    std::cout << n / gcd(n, m);
}