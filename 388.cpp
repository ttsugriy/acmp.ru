#include <algorithm>
#include <stdio.h>

int main() {
    int n, m; scanf("%d %d", &n, &m);
    int matrix[n][m];
    int row_mins[n];
    for (int i = 0; i < n; ++i) row_mins[i] = 1001;
    int col_maxs[m];
    for (int j = 0; j < m; ++j) col_maxs[j] = -1001;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrix[i][j]);
            row_mins[i] = std::min(row_mins[i], matrix[i][j]);
            col_maxs[j] = std::max(col_maxs[j], matrix[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            count += matrix[i][j] == row_mins[i] && matrix[i][j] == col_maxs[j];
        }
    }
    printf("%d", count);
}