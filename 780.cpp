#include <iostream>

int main() {
    int s; std::cin >> s;
    int current = 0;
    for (int i = 0; i <= s; ++i) {
        int partial = 0;
        for (int j = i; current <= s; ++j) {
            current += i + j;
            partial += i + j;
            if (current == s) {
                std::cout << i + j;
                return 0;
            }
        }
        current -= partial;
    }
}