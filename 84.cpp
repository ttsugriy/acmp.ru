#include <algorithm>
#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    int min_i = n;
    int min_j = m;
    int max_i = -1;
    int max_j = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char ch; std::cin >> ch;
            if (ch == '*') {
                min_i = std::min(min_i, i);
                max_i = std::max(max_i, i);
                min_j = std::min(min_j, j);
                max_j = std::max(max_j, j);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i >= min_i && i <= max_i && j >= min_j && j <= max_j) {
                std::cout << '*';
            } else {
                std::cout << '.';
            }
        }
        std::cout << std::endl;
    }
}