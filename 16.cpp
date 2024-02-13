#include <iostream>
#include <array>

int main() {
    int n;
    std::cin >> n;
    std::array<int, 101> dp{1};
    for (int i = 1; i <= n; ++i)
        for (int j = n; j >= i; --j)
            dp[j] += dp[j - i];
    std::cout << dp[n];
}
