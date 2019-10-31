#include <iostream>

int main() {
    int n, curr, next; std::cin >> n >> curr >> next;
    for (; n > 1; --n) {
        int prev = next - curr;
        next = curr;
        curr = prev;
    }
    std::cout << curr << ' ' << next;
}