#include <iostream>
#include <string>

int plus_minus_sum(const std::string& n, int skip) {
    int sum = 0;
    for (int i = 0, sign = 1; i < n.size(); ++i) {
        if (i == skip) continue;
        sum += sign * (n[i] - '0');
        sign *= -1;
    }
    return sum;
}

int main() {
    std::string n; std::cin >> n;
    int max_sum = INT_MIN;
    for (int i = 0; i < n.size(); ++i) {
        int sum = plus_minus_sum(n, i);
        if (sum > max_sum) max_sum = sum;
    }
    std::cout << max_sum;
}