#include <algorithm>
#include <iostream>
#include <string>
#include <limits>

int main() {
    int n, m; std::cin >> n >> m;
    int best_total_time = std::numeric_limits<int>::max();
    std::string best_driver;
    for (int i = 0; i < n; ++i) {
        std::string name; std::cin >> name;
        int total_time = 0;
        for (int j = 0; j < m; ++j) {
            int lap_time; std::cin >> lap_time;
            total_time += lap_time;
        }
        if (total_time < best_total_time) {
            best_total_time = total_time;
            best_driver = name;
        }
    }
    std::cout << best_driver;
}