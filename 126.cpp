#include <iostream>

int main() {
    int n; std::cin >> n;
    int squares[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> squares[i][j];
        }
    }
    int min_dist = INT_MAX;
    for (int s1 = 0; s1 < n; ++s1) {
        for (int s2 = s1 + 1; s2 < n; ++s2) {
            for (int s3 = s2 + 1; s3 < n; ++s3) {
                int dist = squares[s1][s2] + squares[s2][s3] + squares[s3][s1];
                if (dist < min_dist) min_dist = dist;
            }
        }
    }
    std::cout << min_dist;
}