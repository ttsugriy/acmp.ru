#include <iostream>

int digit_product(int n) {
    int sum = 1;
    for (; n > 0; n /= 10) sum *= n % 10;
    return sum;
}

int main() {
    int left, right; std::cin >> left >> right;
    int count = 0;
    for (int n = left; n <= right; ++n) {
        int product = digit_product(n);
        count += product != 0 && n % product == 0;
    }
    std::cout << count;
}