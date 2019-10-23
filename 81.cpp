#include <iostream>
#include <limits>

int main() {
    int n; std::cin >> n;
    int mn = std::numeric_limits<int>::max();
    int mx = std::numeric_limits<int>::min();
    for (int i = 0; i < n; ++i) {
        int watermelone; std::cin >> watermelone;
        mn = std::min(mn, watermelone);
        mx = std::max(mx, watermelone);
    }
    std::cout << mn << ' ' << mx;
}