#include <algorithm>
#include <iostream>
#include <iomanip>

int main() {
    int n; std::cin >> n;
    double prev; std::cin >> prev;
    double min = 30;
    double max = 4000;
    for (int i = 1; i < n; ++i) {
        double freq; std::cin >> freq;
        std::string dir; std::cin >> dir;
        double mid = (freq + prev) / 2;
        if (freq > prev) {
            if (dir == "closer") {
                min = std::max(min, mid);
            } else {
                max = std::min(max, mid);
            }
        } else if (freq < prev) {
            if (dir == "closer") {
                max = std::min(max, mid);
            } else {
                min = std::max(min, mid);
            }
        }
        prev = freq;
    }
    std::cout << std::fixed << std::setprecision(7) << min << ' ' << max;
}