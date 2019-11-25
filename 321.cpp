#include <bitset>
#include <iostream>

static bool has_uniq_digits(int x, int base) {
    std::bitset<36> digits;
    while (x) {
        int digit = x % base;
        if (digits.test(digit)) return false;
        digits.set(digit);
        x /= base;
    }
    return true;
}

int main() {
    int n; std::cin >> n;
    for (int base = 2; base <= 36; ++base) {
        if (has_uniq_digits(n, base)) std::cout << base << ' ';
    }
}