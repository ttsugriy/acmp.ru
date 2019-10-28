#include <iostream>

int main() {
    long long a, b; std::cin >> a >> b;
    long long area = a * b;
    // binary search can be used to speed things up but it's fast enough as is
    for (long long candidate = 1; candidate * candidate <= area; ++candidate) {
        if (candidate * candidate == area) {
            std::cout << candidate;
            return 0;
        }
    }
    std::cout << 0;
}