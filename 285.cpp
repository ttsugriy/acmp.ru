#include <numeric>
#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    int a[n]; for (int i = 0; i < n; ++i) std::cin >> a[i];
    int total = std::accumulate(a, a + n, 0) - n + 1;
    std::cout << (total < m || a[n-1] > m ? "no" : "yes");
}