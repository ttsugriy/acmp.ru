#include <algorithm>
#include <iostream>

int main() {
    int n; std::cin >> n;
    int left = 0;
    int right = 32;
    for (int i = 0; i < n; ++i) {
        int a, b; std::cin >> a >> b;
        left = std::max(left, a);
        right = std::min(right, b);
    }
    std::cout << (left <= right ? "YES" : "NO");
}