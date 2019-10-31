#include <iostream>

int main() {
    int n; std::cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            bool exists; std::cin >> exists;
            count += exists && i < j;
        }
    }
    std::cout << count;
}