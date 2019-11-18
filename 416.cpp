#include <iostream>
#include <cmath>

int main() {
    char l, d; std::cin >> l >> d;
    for (char i = 'a'; i <= 'h'; ++i) {
        for (char j = '1'; j <= '8'; ++j) {
            if (pow(i - l, 2) + pow(j - d, 2) == 5) {
                std::cout << i << j << std::endl;
            }
        }
    }
}