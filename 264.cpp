#include <algorithm>
#include <iostream>

int main() {
    int n; std::cin >> n;
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < n; ++i) {
        int temp; std::cin >> temp;
        if (temp > 0) {
            count += 1;
            max_count = std::max(max_count, count);
        } else {
            count = 0;
        }
    }
    std::cout << max_count;
}