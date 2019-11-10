#include <iostream>

int main() {
    int n; std::cin >> n;
    int prev; std::cin >> prev;
    int links = 0;
    for (int i = 1; i < n; ++i) {
        int curr; std::cin >> curr;
        links += prev + 1 != curr;
    }
    std::cout << links;
}