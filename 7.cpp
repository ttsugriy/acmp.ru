#include <iostream>

bool greater(const std::string& x, const std::string& y) {
    if (x.size() > y.size()) return true;
    if (x.size() < y.size()) return false;
    for (int i = 0; i < x.size(); ++i) {
        if (x[i] < y[i]) return false;
        if (x[i] > y[i]) return true;
    }
    return false;
}

int main() {
    std::string best;

    for (int i = 0; i < 3; ++i) {
        std::string n; std::cin >> n;
        if (greater(n, best)) best = n;
    }
    std::cout << best;
}