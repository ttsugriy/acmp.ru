#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n; std::cin >> n;
    std::vector<int> a; a.reserve(n + 1);
    a.push_back(0);
    a.push_back(1);
    for (int i = 2; i <= n; ++i) {
        if (std::binary_search(a.cbegin(), a.cend(), i)) {
            a.push_back(a.back() + 3);
        } else {
            a.push_back(a.back() + 2);
        }
    }
    std::cout << a.back();
}