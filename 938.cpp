#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<bool> is_prime(1024 + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= 1024; ++i) {
        if (!is_prime[i]) continue;
        for (int j = i * i; j <= 1024; j += i) {
            is_prime[j] = false;
        }
    }
    std::vector<int> primes;
    for (int i = 2; i <= 1024; ++i) if (is_prime[i]) primes.push_back(i);
    int n; std::cin >> n;
    int nums[n]; for (int i = 0; i < n; ++i) std::cin >> nums[i];
    std::sort(nums, nums + n);
    int max_n = -1;
    int factor_count = 0;
    for (int x : nums) {
        int f_count = 0;
        for (int prime : primes) {
            if (prime > x) break;
            f_count += x % prime == 0;
        }
        if (f_count > factor_count) {
            factor_count = f_count;
            max_n = x;
        }
    }
    std::cout << max_n;
}