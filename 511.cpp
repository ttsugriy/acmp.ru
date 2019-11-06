#include <iostream>

int main() {
    int k; std::cin >> k;
    const int total_minutes = (20 - 8) * 60;
    // wait time:
    // 1 -> 0
    // 2 -> 5
    // 3 -> 10
    // 4 -> 15
    // 5 -> 20
    // k -> 5 * (k - 1)
    int minutes = 5 * (k - 1);
    if (minutes <= total_minutes) {
        std::cout << minutes / 60 << ' ' << minutes % 60;
    } else {
        std::cout << "NO";
    }
}