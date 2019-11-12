#include <algorithm>
#include <iostream>
#include <numeric>

int main() {
    std::ios::sync_with_stdio(false);
    int n; std::cin >> n;
    int a[n]; for (int i = 0; i < n; ++i) std::cin >> a[i];
    std::sort(a, a + n);
    std::cout << std::accumulate(a + (n/2), a + n, 0) - std::accumulate(a, a + (n/2), 0);
}