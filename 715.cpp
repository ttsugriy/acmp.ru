#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    char image[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> image[i][j];
        }
    }
    int errors = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char pixel; std::cin >> pixel;
            errors += pixel == image[i][j];
        }
    }
    std::cout << errors;
}