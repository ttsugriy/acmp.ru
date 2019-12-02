#include <iostream>
#include <vector>

int main() {
    long long m, n; std::cin >> m >> n;
    std::vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i <= n; ++i) {
        if (!is_prime[i]) continue;
        for (long long j = i * i; j <= n; j += i) {
            is_prime[j] = false;
        }
    }
    bool absent = true;
    for (int x = m; x <= n; ++x) {
        if (is_prime[x]) {
            std::cout << x << std::endl;
            absent = false;
        }
    }
    if (absent) std::cout << "Absent";
}