#include <iostream>

bool board[1 + 8 + 1][1 + 8 + 1];

int main() {
    int n; std::cin >> n;
    for (int _ = 0; _ < n; ++_) {
        int i, j; std::cin >> i >> j;
        board[i][j] = true;
    }
    int p = 0;
    for (int i = 0; i <= 8; ++i) {
        for (int j = 0; j <= 8; ++j) {
            p += board[i][j] ^ board[i+1][j];
            p += board[i][j] ^ board[i][j+1];
        }
    }
    std::cout << p;
}