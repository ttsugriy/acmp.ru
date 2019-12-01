#include <iostream>
#include <cmath>

int main() {
    int n, c; std::cin >> n >> c;
    double p; std::cin >> p;
    double xs[n], ys[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> xs[i] >> ys[i];
    }
    double x_net, y_net; std::cin >> x_net >> y_net;
    for (int entry_i = 0; entry_i < n; ++entry_i) {
        double total_dist = std::hypot<double>(xs[entry_i] - x_net, ys[entry_i] - y_net);
        for (int i = 0; i < n; ++i) {
            if (i == entry_i) continue;
            total_dist += std::hypot<double>(xs[i] - xs[entry_i], ys[i] - ys[entry_i]);
        }
        if (total_dist * c <= p) {
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
}