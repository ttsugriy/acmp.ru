#include <iostream>

class Rect {
private:
    int bx, by, tx, ty;
public:
    Rect(): bx(0), by(0), tx(0), ty(0) {}

    Rect(int x1, int y1, int x2, int y2) {
        bx = std::min(x1, x2);
        by = std::min(y1, y2);
        tx = std::max(x1, x2);
        ty = std::max(y1, y2);
    }

    int intersection_area(const Rect& other) const {
        int ibx = std::max(bx, other.bx);
        int iby = std::max(by, other.by);
        int itx = std::min(tx, other.tx);
        int ity = std::min(ty, other.ty);
        int width = std::max(0, itx - ibx);
        int height = std::max(0, ity - iby);
        return width * height;
    }
};

int main() {
    int n; std::cin >> n;
    Rect privs[n];
    for (int i = 0; i < n; ++i) {
        int x1, y1, x2, y2; std::cin >> x1 >> y1 >> x2 >> y2;
        privs[i] = Rect(x1, y1, x2, y2);
    }
    int x1, x2, y1, y2; std::cin >> x1 >> y1 >> x2 >> y2;
    Rect constr(x1, y1, x2, y2);
    int intersection = 0;
    for (int i = 0; i < n; ++i) {
        intersection += constr.intersection_area(privs[i]);
    }
    std::cout << intersection;
}