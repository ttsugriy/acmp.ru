#include <algorithm>
#include <iostream>

int main() {
    int n; std::cin >> n;
    int prev, curr, next; std::cin >> prev >> curr;
    int first = prev;
    int second = curr;
    int max_sum = 0;
    for (int i = 2; i < n; ++i) {
        std::cin >> next;
        max_sum = std::max(max_sum, prev + curr + next);
        prev = curr;
        curr = next;
    }
    max_sum = std::max(max_sum, first + prev + curr);
    max_sum = std::max(max_sum, first + second + curr);
    std::cout << max_sum;
}