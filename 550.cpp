#include <iostream>
#include <iomanip>

int main() {
    int year; std::cin >> year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        std::cout << 12;
    } else {
        std::cout << 13;
    }
    std::cout << "/09/" << std::setw(4) << std::setfill('0') << year;
}