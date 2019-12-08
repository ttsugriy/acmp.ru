#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    int low = -1001;
    int high = 1001;
    for (int i = 0; i < n; ++i) {
        int cmin = 1001;
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] < cmin) cmin = matrix[i][j];
        }
        if (cmin > low) low = cmin;
    }
    for (int j = 0; j < m; ++j) {
        int rmax = -1001;
        for (int i = 0; i < n; ++i) {
            if (matrix[i][j] > rmax) rmax = matrix[i][j];
        }
        if (rmax < high) high = rmax;
    }
    std::cout << low << ' ' << high;
}