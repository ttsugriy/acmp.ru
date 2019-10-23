#include <iostream>

int main() {
    int x, y, z; std::cin >> x >> y >> z;
    std::cout << (x + y > z && x + z > y && y + z > x ? "YES" : "NO");
}