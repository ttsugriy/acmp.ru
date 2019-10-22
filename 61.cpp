#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    for (int i = 0; i < 4; ++i) {
        int at, bt; std::cin >> at >> bt;
        a += at; b += bt;
    }
    std::cout << (a > b ? "1" : a < b ? "2" : "DRAW");
}