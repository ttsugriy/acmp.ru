#include <iostream>

int main() {
    int total = 0;
    const int days = 31;
    const int vacations = 4;
    for (int i = 0; i < days; ++i) {
        int count; std::cin >> count;
        total += count;
    }
    std::cout << (total / (days - vacations));
}