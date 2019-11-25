#include <iostream>

int is_prime(int x) {
    for (int d = 2; d * d <= x; ++d) {
        if (x % d == 0) return false;
    }
    return x > 1;
}

int digit_sum(int x) {
    int sum = 0;
    for (; x; x /= 10) sum += x % 10;
    return sum;
}

int main() {
    int a, b; std::cin >> a >> b;
    int max_sum = -1;
    int max_n = -1;
    for (int x = a; x <= b; ++x) {
        if (!is_prime(x)) continue;
        int s = digit_sum(x);
        if (s >= max_sum) {
            max_sum = s;
            max_n = x;
        }
    }
    std::cout << max_n;
}