#include <iostream>

int main() {
    int w, h, r; std::cin >> w >> h >> r;
    std::cout << (2 * r <= std::min(w, h) ? "YES" : "NO");
}