#include <iostream>

int reverse_of(int x) {
    int reversed = 0;
    for (; x; x /= 10) {
        reversed = reversed * 10 + x % 10;
    }
    return reversed;
}

int main() {
    int k; std::cin >> k;
    int count = 0;
    for (int n = 1; n <= k; ++n) {
        count += (n + reverse_of(n) == k);
    }
    std::cout << count;
}