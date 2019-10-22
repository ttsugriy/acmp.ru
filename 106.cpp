#include <iostream>

int main() {
    int n; std::cin >> n;
    int tails = 0;
    for (int i = 0; i < n; ++i) {
        int is_tail; std::cin >> is_tail;
        tails += is_tail;
    }
    std::cout << std::min(n - tails, tails);
}