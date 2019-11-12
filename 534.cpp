#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    int n; std::cin >> n;
    int c[n]; for (int i = 0; i < n; ++i) std::cin >> c[i];
    int k; std::cin >> k;
    for (int i = 0; i < k; ++i) {
        int key; std::cin >> key;
        c[key-1] -= 1;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << (c[i] < 0 ? "yes" : "no") << std::endl;
    }
}