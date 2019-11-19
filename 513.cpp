#include <iostream>

int dp[32][32];

int c(int n, int k) {
    if (n == k || k == 0) return 1;
    if (dp[n][k] == 0) {
        dp[n][k] = c(n - 1, k) + c(n - 1, k - 1);
    }
    return dp[n][k];
}

int main() {
    int n; std::cin >> n;
    int total = 0;
    for (int k = 2; k <= n; ++k) total += c(n, k);
    std::cout << total;
}