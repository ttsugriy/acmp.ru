#include <algorithm>
#include <iostream>

int main() {
    int n; std::cin >> n;
    int pos_sum = 0;
    int nums[n]; for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        if (nums[i] > 0) pos_sum += nums[i];
    }
    int min_idx = std::distance(nums, std::min_element(nums, nums + n));
    int max_idx = std::distance(nums, std::max_element(nums, nums + n));
    int product = 1;
    for (int i = std::min(min_idx, max_idx) + 1; i < std::max(min_idx, max_idx); ++i) {
        product *= nums[i];
    }
    std::cout << pos_sum << ' ' << product;
}