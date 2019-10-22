#include <iostream>

int main() {
    int a1, a2, a3; std::cin >> a1 >> a2 >> a3;
    std::cout << (a1 + a2 == a3 || a1 + a3 == a2 || a2 + a3 == a1 ? "YES" : "NO");
}