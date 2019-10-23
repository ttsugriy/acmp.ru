#include <iostream>

int main() {
    int n; std::cin >> n;
    const int bus = 437;
    for (int i = 1; i <= n; ++i) {
        int bridge; std::cin >> bridge;
        if (bridge <= bus) {
            std::cout << "Crash " << i;
            return 0;
        }
    }
    std::cout << "No crash";
}