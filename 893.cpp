#include <iostream>

int main() {
    long long n; std::cin >> n;
    if (n == 1 || n == 2) {
        std::cout << n;
    } else {
        std::cout << n * (n - 1) * (n - 2);
    }
}