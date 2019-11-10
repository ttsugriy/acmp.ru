#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n; std::cin >> n;
    if (n < 10) {
        std::cout << n << ' ' << n;
        return 0;
    }
    std::vector<int> digits;
    while (n) {
        digits.push_back(n % 10);
        n /= 10;
    }
    std::sort(digits.begin(), digits.end());
    long long largest = 0;
    for (int i = digits.size() - 1; i >= 0; --i) largest = largest * 10 + digits[i];
    if (digits[0] == 0) {
        int first_non_zero = 1;
        while (!digits[first_non_zero]) ++first_non_zero;
        std::swap(digits[0], digits[first_non_zero]);
    }
    long long smallest = 0;
    for (int i = 0; i < digits.size(); ++i) smallest = smallest * 10 + digits[i];
    std::cout << smallest << ' ' << largest;
}