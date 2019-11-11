#include <iostream>
#include <string>

std::string digit_sum(const std::string& n) {
    int sum = 0;
    for (char ch : n) sum += ch - '0';
    return std::to_string(sum);
}

int main() {
    std::string n; std::cin >> n;
    int count = 0;
    for (; n.size() > 1; count += 1) {
        n = digit_sum(n);
    }
    std::cout << n << ' ' << count;
}