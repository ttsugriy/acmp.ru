#include <iostream>

bool is_beautiful(int x) {
    int digit_sum = 0;
    int digit_count = 0;
    while (x > 0) {
        digit_sum += x % 10;
        digit_count += 1;
        x /= 10;
    }
    return digit_sum % digit_count == 0;
}

int main() {
    int n; std::cin >> n;
    for (int i = 1, count = 0; count < n; ++i) {
        count += is_beautiful(i);
        if (count == n) {
            std::cout << i;
            return 0;
        }
    }
}