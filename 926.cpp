#include <iostream>

int main() {
    int n; std::cin >> n;
    char cells[n][n];
    int reserved = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> cells[i][j];
            reserved += cells[i][j] == 'C';
        }
    }
    int twos = reserved / 2;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            char cell = cells[i][j];
            if (cell == 'D') {
                if (twos > 0) {
                    std::cout << 2;
                } else {
                    std::cout << 1;
                }
            } else {
                if (twos > 0) {
                    std::cout << 2;
                    twos -= 1;
                } else {
                    std::cout << 1;
                }
            }
        }
        std::cout << std::endl;
    }
}