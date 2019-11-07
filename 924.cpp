#include <iostream>

int main() {
    const int n = 4;
    char tiles[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) std::cin >> tiles[i][j];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (tiles[i-1][j-1] == tiles[i-1][j] && tiles[i-1][j] == tiles[i][j] && tiles[i][j] == tiles[i][j-1]) {
                std::cout << "No";
                return 0;
            }
        }
    }
    std::cout << "Yes";
}