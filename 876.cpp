#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

int main() {
    double a, b, r; std::cin >> a >> b >> r;
    const double r2 = r * r;
    double f_max = std::numeric_limits<double>::min();
    double x_max;
    double y_max;
    for (double x = 0; x <= r; x += 0.000001) {
        double y2 = r2 - (x * x);
        double y = std::sqrt(y2);
        double f = a * x + b * y;
        if (f > f_max) {
            f_max = f;
            x_max = x;
            y_max = y;
        }
    }
    std::cout << std::fixed << std::setprecision(5);
    std::cout << f_max << std::endl;
    std::cout << x_max << ' ' << y_max;
}