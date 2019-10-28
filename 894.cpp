#include <iostream>
#include <cmath>
#include <iomanip>

const double PI = 3.14159265358979323846264338327950288;

int main() {
    double s, r1; std::cin >> s >> r1;
    double outer_circle_area = PI * r1 * r1;
    double inner_circle_area = outer_circle_area - s;
    double r2 = sqrt(inner_circle_area / PI);
    std::cout << std::fixed << std::setprecision(3) << r2;
}