#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    char board[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> board[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            count += (
                board[i][j] == '.' &&
                (i == 0 || board[i-1][j] == '.') &&
                (j == 0 || board[i][j-1] == '.') &&
                (i == n-1 || board[i+1][j] == '.') && 
                (j == m-1 || board[i][j+1] == '.')  
            );
        }
    }
    std::cout << count;
}