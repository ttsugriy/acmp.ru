#include <iostream>

int digit_sum(int x) {
    int sum = 0;
    for (; x > 0; x /= 10) sum += x % 10;
    return sum;
}

int main() {
    int n; std::cin >> n;
    int best_divisor = 0;
    int best_digit_sum = 0;
    for (int i = 1; i <= n; ++i) {
        int sum = digit_sum(i);
        if (n % i == 0 && sum > best_digit_sum) {
            best_divisor = i;
            best_digit_sum = sum;
        }
    }
    std::cout << best_divisor;
}