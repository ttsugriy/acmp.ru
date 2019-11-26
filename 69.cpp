#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

int main() {
    int n, a; std::cin >> n >> a;
    double angle = M_PI / n;
    // a/2 / R = sin(angle) => R = a/2/sin(angle)
    double R = a / 2.0 / sin(angle);
    // a/2 / r = tan(angle) ==> r = a/2/tan(angle)
    // r = R * cos(angle)
    double r = a / 2.0 / tan(angle);
    std::cout << (R - r < 1 ? "YES" : "NO");
    // a / 2.0 / sin(half_angle) - a / 2.0 / tan(half_angle) < 1 ==>
    // a / sin(half_angle) - a / tan(half_angle) < 2 ==>
    // a / sin(half_angle) - a / sin(ha) / cos(ha) < 2 ==>
    // a / sin(ha) - a * cos(ha) / sin(ha) < 2 ==>
    // a - a * cos(ha) < 2 * sin(ha)
}