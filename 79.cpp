#include <iostream>

int main() {
    int a, b; std::cin >> a >> b;
    int res = 1;
    for (int i = 1; i <= b; ++i) {
        res = (res * a) % 10;
    }
    std::cout << res;
}