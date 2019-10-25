#include <iostream>

int main() {
    long long n; std::cin >> n;
    std::cout << (n / 6) + ((7 - (n % 6)) % 7) << ' ' << n * 6;
}