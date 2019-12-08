#include <iostream>
#include <cmath>
#include <unordered_set>

int main() {
    int n; std::cin >> n;
    std::unordered_set<double> angles;
    for (int i = 0; i < n; ++i) {
        int x, y; std::cin >> x >> y;
        angles.insert(atan2(y, x));
    }
    std::cout << angles.size();
}