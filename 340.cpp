#include <algorithm>
#include <iostream>

bool fits_inside(int box1[3], int box2[3]) {
    for (int i = 0; i < 3; ++i) {
        if (box1[i] > box2[i]) return false;
    }
    return true;
}

int main() {
    int box1[3]; for (int i = 0; i < 3; ++i) std::cin >> box1[i];
    std::sort(box1, box1 + 3);
    int box2[3]; for (int i = 0; i < 3; ++i) std::cin >> box2[i];
    std::sort(box2, box2 + 3);
    if (std::equal(box1, box1 + 3, box2)) {
        std::cout << "Boxes are equal";
    } else if (fits_inside(box1, box2)) {
        std::cout << "The first box is smaller than the second one";
    } else if (fits_inside(box2, box1)) {
        std::cout << "The first box is larger than the second one";
    } else {
        std::cout << "Boxes are incomparable";
    }
}