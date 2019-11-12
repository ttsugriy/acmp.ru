#include <iostream>

int digit_sum(int x, int k) {
    int sum = 0;
    for (; x; x /= k) sum += x % k;
    return sum;
}

int main() {
    std::ios::sync_with_stdio(false);
    int n, k1, k2; std::cin >> n >> k1 >> k2;
    const int max_product = 9 * 9 * 9 * 9;
    int counts[max_product+1] = {0};
    for (int i = 0; i < n; ++i) {
        int a; std::cin >> a;
        counts[digit_sum(a, k1) * digit_sum(a, k2)] += 1;
    }
    for (int i = 0; i <= max_product; ++i) {
        while (counts[i]--) std::cout << i << ' ';
    }
}