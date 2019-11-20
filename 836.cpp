#include <algorithm>
#include <iostream>

bool even_odd(int x) {
    if (x & 1) return false;
    int third_oct_digit = 0;
    for (int i = 0; i < 3; ++i, x /= 8) {
        third_oct_digit = x % 8;
    }
    return third_oct_digit & 1;
}

int main() {
    int n; std::cin >> n;
    int as[n];
    int len = 0;
    for (int i = 0; i < n; ++i) {
        int a; std::cin >> a;
        if (even_odd(a)) as[len++] = a;
    }
    std::cout << len << std::endl;
    std::sort(as, as + len);
    for (int i = 0; i < len; ++i) std::cout << as[i] << ' ';
}