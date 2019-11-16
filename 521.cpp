#include <iostream>

int steps(int n) {
    int count = 0;
    while (n > 2) {
        if (n & 1) {
            n = n * 3 + 1;
        } else {
            n /= 2;
        }
        count += 1;
    }
    return n == 2 ? count : -1; 
}

int main() {
    int p, k; std::cin >> p >> k;
    int total = 0;
    for (int i = p; i <= k; ++i) {
        int count = steps(i);
        if (count == -1) {
            std::cout << 0;
            return 0;
        }
        total += count;
    }
    std::cout << total;
}