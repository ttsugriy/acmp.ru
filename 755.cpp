#include <iostream>

int main() {
    int x, y, z; std::cin >> x >> y >> z;
    int gathered = (x + y) - z;
    std::cout << (gathered >= 0 ? std::to_string(gathered) : "Impossible");
}