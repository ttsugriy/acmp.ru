#include <iostream>
#include <string>

bool is_prime(int x) {
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return x > 1;
}

int main() {
    int m; std::cin >> m;
    std::string seq; seq.reserve(10000);
    for (int x = 2; seq.size() < 10000; ++x) {
        if (is_prime(x)) seq += std::to_string(x);
    }
    for (int i = 0; i < m; ++i) {
        int pos; std::cin >> pos;
        std::cout << seq[pos-1];
    }
}