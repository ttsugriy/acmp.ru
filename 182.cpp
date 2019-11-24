#include <iostream>
#include <cmath>
#include <algorithm>
#include <ostream>

class Point {
private:
    int x, y;
public:
    Point(int x, int y): x(x), y(y) {}

    int sq_dist_to(const Point& other) const {
        return pow(x - other.x, 2) + pow(y - other.y, 2);
    }

    Point mirror(const Point& a, const Point& b) const {
        return Point(a.x + (b.x - x), a.y + (b.y - y));
    }

    friend std::ostream& operator<<(std::ostream& out, const Point& p);
};

std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << p.x << ' ' << p.y;
    return out;
}

int main() {
    int x1, y1, x2, y2, x3, y3; std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Point a(x1, y1), b(x2, y2), c(x3, y3);
    int ab = a.sq_dist_to(b);
    int ac = a.sq_dist_to(c);
    int bc = b.sq_dist_to(c);
    if (ab > ac && ab > bc) {
        std::cout << c.mirror(a, b);
    } else if (ac > ab && ac > bc) {
        std::cout << b.mirror(a, c);
    } else {
        std::cout << a.mirror(b, c);
    }
}