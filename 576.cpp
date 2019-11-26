#include <iostream>

int gcd(int x, int y) {
    while (y > 0) {
        int tmp = y;
        y = x % y;
        x = tmp;
    }
    return x;
}

int prime_count(int n) {
    int count = 0;
    for (int i = 1; i < n; ++i) {
        count += (gcd(i, n) == 1);
    }
    return count;
}

int main() {
    int n; std::cin >> n;
    std::cout << prime_count(n);
}