#include <iostream>

int main() {
    int k; std::cin >> k;
    int height = 0;
    // can use binary search to reduce complexity from O(sqrt(N)) to O(log(N))
    while (height * (height + 1) / 2 <= k) {
        height += 1;
    }
    std::cout << (height - 1);
}