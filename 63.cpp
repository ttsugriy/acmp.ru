#include <iostream>

int main() {
    int s, p; std::cin >> s >> p;
    for (int x = 1; x <= 1000 && x < s; ++x) {
        int y = s - x;
        if (x * y == p) {
            std::cout << x << ' ' << y;
            return 0;
        }
    }
}