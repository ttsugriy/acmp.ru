#include <iostream>
#include <cmath>

int main() {
    bool hit[5] = {false};
    int coords[5] = {0, 25, 50, 75, 100};
    int total_hits = 0;
    for (int i = 0; i < 5; ++i) {
        int x, y; std::cin >> x >> y;
        for (int j = 0; j < 5; ++j) {
            int sqr_dist = pow(x - coords[j], 2) + y * y;
            if (sqr_dist <= 100) {
                // record hit
                total_hits += !hit[j]; // new hit
                hit[j] = true;
            }
        }
    }
    std::cout << total_hits;
}