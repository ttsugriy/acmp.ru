#include <iostream>

int main() {
    int k, w; std::cin >> k >> w;
    int a[3], b[3]; std::cin >> a[0] >> b[0] >> a[1] >> b[1] >> a[2] >> b[2];
    for (int i = 0; i < (1 << 3); ++i) {
        int count = 0;
        int weight = 0;
        for (int j = 0; j < 3; ++j) {
            if (i & (1 << j)) {
                weight += a[j];
                count += b[j];
            }
        }
        if (weight <= w && count >= k) {
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
}