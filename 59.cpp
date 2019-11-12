#include <iostream>

int main() {
    int n, k; std::cin >> n >> k;
    int sum = 0;
    int product = 1;
    for (; n; n /= k) {
        int digit = n % k;
        sum += digit;
        product *= digit;
    }
    std::cout << product - sum;
}