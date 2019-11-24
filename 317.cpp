#include <iostream>

int main() {
    int x, y, z, w; std::cin >> x >> y >> z >> w;
    int count = 0;
    for (int xi = 0; xi <= w / x; ++xi) {
        for (int yi = 0; yi * y <= w - xi * x; ++yi) {
            int g = w - xi * x - yi * y;
            count += (g % z) == 0; 
        }
    }
    std::cout << count;
}