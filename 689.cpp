#include <algorithm>
#include <iostream>
#include <vector>
#include <bitset>
#include <limits>

int complexity_of(int x, int base) {
    std::bitset<36> digits;
    int count = 0;
    while (x > 0) {
        digits.set(x % base);
        x /= base;
        count += 1;
    }
    return count + digits.count();
}

std::string to_string(int x, int base) {
    std::string str;
    while (x > 0) {
        int digit = x % base;
        str += (digit < 10 ? digit + '0' : digit - 10 + 'A');
        x /= base;
    }
    std::reverse(str.begin(), str.end());
    return str;
}

int main() {
    int n; std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num; std::cin >> num;
        int min_complexity = std::numeric_limits<int>::max();
        int min_base = std::numeric_limits<int>::max();
        for (int base = 2; base <= 36; ++base) {
            int complexity = complexity_of(num, base);
            if (complexity < min_complexity) {
                min_complexity = complexity;
                min_base = base;
            }
        }
        std::cout << min_base << ' ' << to_string(num, min_base) << std::endl;
    }
}