#include <set>
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int n; std::cin >> n;
    int xs[n], ys[n];
    std::set<double> dists;
    for (int i = 0; i < n; ++i) std::cin >> xs[i] >> ys[i];
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            dists.insert(std::hypot<double>(xs[i]-xs[j], ys[i]-ys[j]));
        }
    }
    std::cout << dists.size() << std::endl;
    std::cout << std::setprecision(10) << std::fixed;
    for (double dist : dists) std::cout << dist << std::endl;
}