#include <iostream>
#include <bitset>

int digit_count(int x) {
    std::bitset<10> digits;
    for (; x > 0; x /= 10) digits[x % 10] = true;
    return digits.count();
}

int main() {
    int n; std::cin >> n;
    int closest_dist = n;
    int closest_num = n;
    for (int i = 1; i <= 40000; ++i) {
        if (digit_count(i) <= 2 && abs(n - i) < closest_dist) {
            closest_dist = abs(n - i);
            closest_num = i;
        }
    }
    std::cout << closest_num;
}