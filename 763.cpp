#include <iostream>

int main() {
    int x, y; std::cin >> x >> y;
    if (x == 1 && y == 1) {
        std::cout << 0;
    } else if (x == 1 || y == 1 || x != y) {
        std::cout << 1;
    } else {
        std::cout << 2;
    }
}