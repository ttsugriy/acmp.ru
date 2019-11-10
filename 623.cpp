#include <iostream>

int main() {
    int n; std::cin >> n;
    int prev = 0;
    int curr = 1;
    for (int i = 0; i <= n; ++i) {
        int next = (prev + curr) % 10;
        prev = curr;
        curr = next;
    }
    std::cout << prev;
}