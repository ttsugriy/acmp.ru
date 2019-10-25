#include <iostream>

int main() {
    char ch, digit; std::cin >> ch >> digit;
    std::cout << ( ch % 2 == digit % 2 ? "BLACK" : "WHITE");
}