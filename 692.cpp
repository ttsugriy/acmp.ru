#include <iostream>

int main() {
    int n; std::cin >> n;
    std::cout << (n != 0 && !(n & (n - 1)) ? "YES" : "NO");
}