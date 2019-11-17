#include <algorithm>
#include <iostream>

int main() {
    int m, n; std::cin >> m >> n;
    bool nums1[1 + 32000 + 32000 + 1] = {false};
    bool nums2[1 + 32000 + 32000 + 1] = {false};
    for (int i = 0; i < m; ++i) {
        int num; std::cin >> num;
        nums1[num + 32000] = true;
    }
    for (int i = 0; i < n; ++i) {
        int num; std::cin >> num;
        nums2[num + 32000] = true;
    }
    std::cout << (std::equal(nums1, nums1 + 1 + 32000 + 32000 + 1, nums2) ? 1 : 0);
}