#include <iostream>

int main() {
    int l, w, h; std::cin >> l >> w >> h;
    int area = 2 * (l * h + w * h);
    std::cout << ((area + 15) / 16);
}