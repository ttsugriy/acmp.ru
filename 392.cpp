#include <algorithm>
#include <iostream>

int main() {
    int n; std::cin >> n;
    int p[n]; for (int i = 0; i < n; ++i) std::cin >> p[i];
    int start = std::distance(p, std::find(p, p + n, 1));
    for (int i = 0; i < n; ++i) {
        std::cout << p[(i + start) % n] << ' ';
    }
}