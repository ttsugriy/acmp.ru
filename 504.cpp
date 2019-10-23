#include <iostream>

int main() {
    int k; std::cin >> k;
    switch (k % 3) {
        case 0:
        std::cout << "GCV";
        break;
        case 1:
        std::cout << "VGC";
        break;
        default:
        std::cout << "CVG";
        break;
    }
}