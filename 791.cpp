#include <iostream>

int main() {
    int n; std::cin >> n;
    n -= 1;
    int i = n / 8;
    int j = n % 8;
    if (i > 0) {
        std::cout << n - 8 + 1 << ' ';
    }
    if (j > 0) {
        std::cout << n - 1 + 1 << ' ';
    }
    if (j < 7) {
        std::cout << n + 1 + 1 << ' ';
    }
    if (i < 7) {
        std::cout << n + 8 + 1;
    }
}