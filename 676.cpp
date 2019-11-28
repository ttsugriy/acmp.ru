#include <algorithm>
#include <iostream>
#include <vector>

bool wins(int n) {
    if (n == 1 || n == 2 || n == 1000) return true;
    if (n > 1 && !wins(n - 1)) return true;
    if (n > 2 && !wins(n - 2)) return true;
    if (n > 1000 && !wins(n - 1000)) return true;
    return false;
}

int main() {
    int n; std::cin >> n;
    std::vector<bool> wins(n+1);
    wins[1] = true;
    wins[2] = true;
    wins[1000] = true;
    for (int i = 3; i <= n; ++i) {
        wins[i] = wins[i] || !wins[i-1] || !wins[i-2];
        if (i > 1000) wins[i] = wins[i] || !wins[i - 1000];
    }
    std::cout << (wins[n] ? 1 : 2);
}