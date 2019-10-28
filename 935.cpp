#include <iostream>

int main() {
    int x1, y1, x2, y2; std::cin >> x1 >> y1 >> x2 >> y2;
    std::cout << ((x1 + y1) % 2 == (x2 + y2) % 2 ? "YES" : "NO");
}