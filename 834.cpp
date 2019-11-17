#include <iostream>
#include <iomanip>

#define _USE_MATH_DEFINES
#include <cmath>

int main() {
    double xk, yk; std::cin >> xk >> yk;
    double xc, yc, rc; std::cin >> xc >> yc >> rc;
    double c_area =  M_PI * pow(rc, 2);
    double road_length = hypot(xk - xc, yk - yc);
    std::cout << std::fixed << std::setprecision(5);
    if (road_length <= rc) {
        std::cout << c_area;
        return 0;
    }
    double angle = acos(rc / road_length);
    double segment_angle = 2.0 * angle;
    double other_side = sqrt(pow(road_length, 2) - pow(rc, 2));
    double sector_area = pow(rc, 2) * segment_angle / 2.0;
    std::cout << c_area + other_side * rc - sector_area;
}