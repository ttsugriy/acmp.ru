#include <iostream>

int main() {
    int n, m, y, x; std::cin >> n >> m >> y >> x;
    std::cout << ((y - 1) * m + (((y & 1) == 0) ? m - x + 1 : x)) - 1;
}