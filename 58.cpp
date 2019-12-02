#include <iostream>
#include <vector>

static bool is_nice(const std::vector<std::vector<int>>& a, int n, int m) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if (a[i][j] == a[i+1][j] && a[i][j] == a[i][j+1] && a[i][j] == a[i+1][j+1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t; std::cin >> t;
    for (int _ = 0; _ < t; ++_) {
        int n, m; std::cin >> n >> m;
        std::vector<std::vector<int>> a(n, std::vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cin >> a[i][j];
            }
        }
        std::cout << (is_nice(a, n, m) ? "YES" : "NO") << std::endl;
    }
}