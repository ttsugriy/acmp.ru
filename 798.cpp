#include <iostream>

int main() {
    long long m, n, i, j, c; std::cin >> m >> n >> i >> j >> c;
    if (m * n % 2 == 0) {
        std::cout << "equal";
    } else {
        int color = ((i + j) % 2) ^ c;
        std::cout << (color == 1 ? "white" : "black");
    }
}