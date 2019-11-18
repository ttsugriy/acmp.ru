#include <iostream>

bool is_automorph(long long x) {
    for (long long sq = x * x; x > 0; x /= 10, sq /= 10) {
        if (x % 10 != sq % 10) return false;
    }
    return true;
}

int main() {
    int a, b; std::cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (is_automorph(i)) {
            std::cout << i << ' ';
        }
    }
}