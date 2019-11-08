#include <iostream>

int main() {
    int n, m, k; std::cin >> n >> m >> k;
    if (n >= m) {
        std::cout << 1;
    } else if (n <= k) {
        std::cout << "NO";
    } else {
        int count = 0;
        while (true) {
            count += 1;
            m -= n;
            if (m <= 0) break;
            m += k;
        }
        std::cout << count;
    }
}