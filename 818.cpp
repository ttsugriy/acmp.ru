#include <iostream>

int main() {
    int n; std::cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int a; std::cin >> a;
        count += a - 1;
    }
    std::cout << (count + 1);
}