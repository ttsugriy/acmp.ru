#include <iostream>

bool is_lucky(int x) {
    return x/100000%10 + x/10000%10 + x/1000%10 == x/100%10 + x/10%10 + x/1%10;
}

int main() {
    int k; std::cin >> k;
    for (int i = 0; i < k; ++i) {
        int t; std::cin >> t;
        std::cout << (is_lucky(t - 1) || is_lucky(t + 1) ? "Yes" : "No") << ' ';
    }
}