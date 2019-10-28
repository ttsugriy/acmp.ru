#include <iostream>

int main() {
    int k1, l1, m1; std::cin >> k1 >> l1 >> m1;
    int k2, l2, m2; std::cin >> k2 >> l2 >> m2;
    int bolt_count = k1 - k1 * l1 / 100;
    int nut_count = k2 - k2 * l2 / 100;
    int can_be_used = std::min(bolt_count, nut_count);
    std::cout << (k1 - can_be_used) * m1 + (k2 - can_be_used) * m2;
}