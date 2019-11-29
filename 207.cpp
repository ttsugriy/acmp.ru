#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x = 0;
    double y = 0;
    double d45 = std::sqrt(2) / 2;
    int n; std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int dir, steps; std::cin >> dir >> steps;
        switch (dir) {
            case 1:
            y += steps;
            break;
            case 2:
            x += d45 * steps;
            y += d45 * steps;
            break;
            case 3:
            x += steps;
            break;
            case 4:
            x += d45 * steps;
            y -= d45 * steps;
            break;
            case 5:
            y -= steps;
            break;
            case 6:
            x -= d45 * steps;
            y -= d45 * steps;
            break;
            case 7:
            x -= steps;
            break;
            case 8:
            x -= d45 * steps;
            y += d45 * steps;
            break;
        }
    }
    std::cout << std::fixed << std::setprecision(3) << x << ' ' << y;
}