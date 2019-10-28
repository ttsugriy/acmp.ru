#include <iostream>

int main() {
    int n, i, j; std::cin >> n >> i >> j;
    int start = std::min(i, j);
    int end = std::max(i, j);
    std::cout << std::min(end - start, start + n - end) - 1;
}