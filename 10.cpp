#include <iostream>

int main() {
    long long a, b, c, d; std::cin >> a >> b >> c >> d;
    for (long long x = -100; x <= 100; ++x ) {
        if (a * x * x * x + b * x * x + c * x + d == 0) std::cout << x << ' ';
    }
}