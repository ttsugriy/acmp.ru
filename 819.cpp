#include <iostream>

int main() {
    long long a, b, c; std::cin >> a >> b >> c;
    std::cout << (2 * (a * b + a * c + b * c)) << ' ' << (a * b * c);
}