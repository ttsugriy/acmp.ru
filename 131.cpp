#include <iostream>

int main() {
    int n; std::cin >> n;
    int oldest_idx = -1;
    int oldest_age = -1;
    for (int i = 1; i <= n; ++i) {
        int v, s; std::cin >> v >> s;
        if (s == 1 && v > oldest_age) {
            oldest_age = v;
            oldest_idx = i;
        }
    }
    std::cout << oldest_idx;
}