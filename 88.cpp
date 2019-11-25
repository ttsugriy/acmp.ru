#include <iostream>
#include <bitset>

int main() {
    int n; std::cin >> n;
    const int n2 = n * n;
    int board[n2][n2];
    for (int i = 0; i < n2; ++i) {
        for (int j = 0; j < n2; ++j) {
            std::cin >> board[i][j];
        }
    }

    for (int i = 0; i < n2; ++i) {
        for (int j = 0; j < n2; ++j) {
            if (board[i][j] < 1 || board[i][j] > n2) {
                std::cout << "Incorrect";
                return 0;
            }
        }
    }

    for (int row = 0; row < n2; ++row) {
        std::bitset<101> digits;
        for (int col = 0; col < n2; ++col) {
            digits.set(board[row][col]);
        }
        if (digits.count() < n2) {
            std::cout << "Incorrect";
            return 0;
        }
    }

    for (int col = 0; col < n2; ++col) {
        std::bitset<101> digits;
        for (int row = 0; row < n2; ++row) {
            digits.set(board[row][col]);
        }
        if (digits.count() < n2) {
            std::cout << "Incorrect";
            return 0;
        }
    }

    for (int i = 0; i <= n2 - n; i += n) {
        for (int j = 0; j <= n2 - n; j += n) {
            std::bitset<101> digits;
            for (int row = 0; row < n; ++row) {
                for (int col = 0; col < n; ++col) {
                    digits.set(board[i + row][j + col]);
                }
            }
            if (digits.count() < n2) {
                std::cout << "Incorrect";
                return 0;
            }
        }
    }

    std::cout << "Correct";
}