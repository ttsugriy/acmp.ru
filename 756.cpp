#include <iostream>

int main() {
    int m, n; std::cin >> m >> n;
    // total number of edges between nodes - number of required edges to form a tree
    std::cout << ((m - 1) * n + (n - 1) * m - m * n + 1);
}