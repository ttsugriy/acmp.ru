#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    int n; std::cin >> n;
    int p[n];
    for (int i = 0; i < n; ++i) {
        int dest; std::cin >> dest;
        p[dest-1] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << p[i] << ' ';
    }
}