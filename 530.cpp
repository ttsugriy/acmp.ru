#include <iostream>

int main() {
    int w, h; std::cin >> w >> h;
    char image1[h][w];
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            std::cin >> image1[i][j];
        }
    }
    char image2[h][w];
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            std::cin >> image2[i][j];
        }
    }
    char ops[4]; for (int i = 0; i < 4; ++i) std::cin >> ops[i];
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            std::cout << ops[(image1[i][j] - '0') << 1 | (image2[i][j] - '0')];
        }
        std::cout << std::endl;
    }
}