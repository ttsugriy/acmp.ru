#include <iostream>

int main() {
    int n; std::cin >> n;
    int nums[n];
    for (int i = 0; i < n; ++i) std::cin >> nums[i];
    for (int i = n - 1; i >=0; --i) std::cout << nums[i] << ' ';
}