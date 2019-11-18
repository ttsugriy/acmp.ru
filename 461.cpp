#include <algorithm>
#include <iostream>
#include <numeric>

int main() {
    int k; std::cin >> k;
    int groups[k];
    for (int i = 0; i < k; ++i) std::cin >> groups[i];
    const int quorum = k / 2 + 1;
    std::nth_element(groups, groups + quorum, groups + k);
    int count = 0;
    for (int i = 0; i < quorum; ++i) {
        count += groups[i] / 2 + 1;
    }
    std::cout << count;
}