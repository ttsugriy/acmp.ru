#include <iostream>

int main() {
    int n; std::cin >> n;
    int teams[n];
    for (int i = 0; i < n; ++i) std::cin >> teams[i];
    int k; std::cin >> k;
    int total = 0;
    for (int i = 0; i < n; ++i) total += std::min(k, teams[i]);
    std::cout << total;
}