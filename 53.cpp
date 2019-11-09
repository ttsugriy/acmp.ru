#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    int red = 0;
    int green = 0;
    int blue = 0;
    int black = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int product = i * j;
            if (product % 5 == 0) {
                blue += 1;
            } else if (product % 3 == 0) {
                green += 1;
            } else if (product % 2 == 0) {
                red += 1;
            } else {
                black += 1;
            }
        }
    }
    std::cout << "RED : " << red << std::endl;
    std::cout << "GREEN : " << green << std::endl;
    std::cout << "BLUE : " << blue << std::endl;
    std::cout << "BLACK : " << black << std::endl;
}