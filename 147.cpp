#include <iostream>

static int fib(int n) {
    if (n == 0) return 0;
    int prev = 0;
    int curr = 1;
    int next;
    for (int i = 1; i < n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int n; std::cin >> n;
    std::cout << fib(n);
}