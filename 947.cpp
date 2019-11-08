#include <iostream>

int main() {
    double x; std::cin >> x;
    double sum = 0;
    int c;
    for (c = 0; sum < x; ++c) {
        sum += 1. / (c + 2);
    }
    std::cout << c << " card(s)";
}