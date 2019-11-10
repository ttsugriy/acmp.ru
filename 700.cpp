#include <iostream>

int main() {
    long long n, v, k; std::cin >> n >> v >> k;
    long long saved = 0;
    long long day = 0;
    for (; day < n && v > 0; ++day) {
        saved += v;
        v -= k;
    }
    std::cout << (v <= 0 && day != n ? "NO" : "YES") << ' ' << saved;
}