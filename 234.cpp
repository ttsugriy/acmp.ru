#include <iostream>
#include <algorithm>

int main() {
    int n, m, k; std::cin >> n >> m >> k;
    char field[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            field[i][j] = '.';
        }
    }
    for (int _ = 0; _ < k; ++_) {
        int i, j; std::cin >> i >> j;
        --i, --j;
        field[i][j] = '*';
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (field[i][j] == '*') continue;
            int count = 0;
            for (int mi = std::max(0, i - 1); mi < std::min(i + 2, n); ++mi) {
                for (int mj = std::max(0, j - 1); mj < std::min(j + 2, m); ++mj) {
                    if (mi == i && mj == j) continue;
                    count += (field[mi][mj] == '*');
                }
            }
            field[i][j] = count == 0 ? '.' : '0' + count;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << field[i][j];
        }
        std::cout << std::endl;
    }
}