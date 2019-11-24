#include <iostream>

int main() {
    int n; std::cin >> n;
    int points[n]; for (int i = 0; i < n; ++i) std::cin >> points[i];
    int bonus; std::cin >> bonus;
    int m; std::cin >> m;
    int max_points = 0;
    int penalty = 0;
    for (int i = 0; i < m; ++i) {
        int total = 0;
        int successful = 0;
        for (int j = 0; j < n; ++j) {
            int result; std::cin >> result;
            successful += result;
            total += result * points[j];
        }
        total -= penalty;
        if (successful == n) total += bonus;
        if (total > max_points) max_points = total;
        std::cout << max_points << std::endl;
        penalty += 2;
    }
}