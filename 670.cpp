#include <iostream>

bool has_duplicate_digits(int x) {
    int digits = 0;
    while (x) {
        int digit = x % 10;
        if (digits & (1 << digit)) return true;
        digits |= 1 << digit;
        x /= 10;
    }
    return false;
}

int main() {
    int n; std::cin >> n;
    for (int i = 1; ; ++i) {
        if (!has_duplicate_digits(i)) n -= 1;
        if (n == 0) {
            std::cout << i;
            return 0;
        }
    }
}