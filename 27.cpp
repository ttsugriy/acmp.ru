#include <iostream>

bool canvas[101][101];

int main() {
    int w, h; std::cin >> w >> h;
    int n; std::cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int x1, y1, x2, y2; std::cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i < x2; ++i) {
            for (int j = y1; j < y2; ++j) {
                count += !canvas[i][j];
                canvas[i][j] = true;
            }
        }
    }
    std::cout << w * h - count;
}