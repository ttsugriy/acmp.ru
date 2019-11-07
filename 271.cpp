#include <iostream>

int main() {
    int n; std::cin >> n;
    int prev = 0;
    int curr = 1;
    for (int num = 2; curr <= 1200000000; ++num) {
        int next = prev + curr;
        if (next == n) {
            std::cout << 1 << std::endl << num;
            return 0;
        }
        prev = curr;
        curr = next;
    }
    std::cout << 0;
}