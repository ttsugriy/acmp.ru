#include <iostream>

int main() {
    int n; std::cin >> n;
    int original[n];
    for (int i = 0; i < n; ++i) std::cin >> original[i];
    int m; std::cin >> m;
    int mapping[201];
    for (int i = 0; i < 201; ++i) mapping[i] = i;
    for (int i = 0; i < m; ++i) {
        int from, to; std::cin >> from >> to;
        mapping[from] = to;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << mapping[original[i]] << ' ';
    }
}