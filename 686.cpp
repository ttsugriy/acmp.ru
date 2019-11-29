#include <algorithm>
#include <iostream>

int main() {
    int n; std::cin >> n;
    int nums[n]; for (int i = 0; i < n; ++i) std::cin >> nums[i];
    std::sort(nums, nums + n);
    int left = 0;
    int right = n - 1;
    int res[n];
    for (int i = 0; left <= right; ++i) {
        if (i & 1) {
            res[right--] = nums[i];
        } else {
            res[left++] = nums[i];
        }
    }
    for (int i = 0; i < n; ++i) std::cout << res[i] << ' ';
}