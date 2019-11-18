#include <iostream>

int main() {
    int counts[10] = {0};
    int n, m; std::cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int product = i * j;
            while (product) {
                counts[product % 10] += 1;
                product /= 10;
            }
        }
    }
    for (int i = 0; i < 10; ++i) std::cout << counts[i] << std::endl;
}