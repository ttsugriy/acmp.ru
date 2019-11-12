#include <iostream>

int digits_of(int x) {
    int digits = 0;
    for (; x; x /= 10) {
        digits |= (1 << (x % 10));
    }
    return digits;
}

int main() {
    int k; std::cin >> k;
    for (int i = 0; i < k; ++i) {
        int a, b; std::cin >> a >> b;
        std::cout << (digits_of(a) == digits_of(b) ? "YES" : "NO") << std::endl;
    }
}