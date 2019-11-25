#include <iostream>
#include <string>
#include <algorithm>

bool is_prime(int x) {
    for (int d = 2; d * d <= x; ++d) if (x % d == 0) return false;
    return x > 1;
}

bool is_snd_prime(int x) {
    std::string digits = std::to_string(x);
    std::sort(digits.begin(), digits.end());
    int fst = 0;
    for (int i = 0; i < digits.size(); ++i) fst = fst * 10 + (digits[i] - '0');
    int snd = 0;
    for (int i = digits.size() - 1; i >= 0; --i) snd = snd * 10 + (digits[i] - '0');
    return is_prime(fst) && is_prime(snd);
}

int main() {
    int n; std::cin >> n;
    std::cout << (is_snd_prime(n) ? "Yes" : "No");
}