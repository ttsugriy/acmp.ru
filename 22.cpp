#include <iostream>

int main() {
    int n; std::cin >> n;
    int count = 0;
    for (; n; ++count) {
        n &= (n - 1);
    }
    std::cout << count;
}