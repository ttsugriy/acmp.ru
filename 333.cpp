#include <iostream>
#include <bitset>
#include <string>

std::bitset<10> digits_of(const std::string& n) {
    std::bitset<10> digits;
    for (char ch : n) digits.set(ch - '0');
    return digits;
}

int main() {
    std::string a, b, c; std::cin >> a >> b >> c;
    std::bitset<10> common = digits_of(a) & digits_of(b) & digits_of(c);
    std::cout << common.count() << std::endl;
    for (int i = 0; i < 10; ++i) {
        if (common.test(i)) std::cout << i << ' ';
    }
}