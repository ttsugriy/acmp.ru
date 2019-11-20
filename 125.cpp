#include <iostream>

int main() {
    int n; std::cin >> n;
    bool hills[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            bool connected; std::cin >> connected; 
            hills[i][j] = connected;
        }
    }
    int colors[n];
    for (int i = 0; i < n; ++i) std::cin >> colors[i];
    int colored = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            colored += hills[i][j] && colors[i] != colors[j];
        }
    }
    std::cout << colored;
}