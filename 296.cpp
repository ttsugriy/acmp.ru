#include <iostream>

int main() {
    int n; std::cin >> n;
    for (int b = n; b >= 0; --b) {
        int covered = b * 5;
        if (covered > n) continue;
        int rem = n - covered;
        if (rem % 3 != 0) continue;
        int a = rem / 3;
        std::cout << b << ' ' << a;
        break;
    }
}