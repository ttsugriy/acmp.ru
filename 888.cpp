#include <algorithm>
#include <iostream>

int main() {
    int n; std::cin >> n;
    long long max_score = 3;
    long long total = 0;
    for (int i = 0; i < n; ++i) {
        int result; std::cin >> result;
        if (result == 0) {
            max_score = std::max(3LL, max_score - 3LL);
        } else {
            total += max_score;
            max_score += 1;
        }
    }
    std::cout << total;
}