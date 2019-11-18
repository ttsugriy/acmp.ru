#include <iostream>
#include <string>

int main() {
    int n; std::cin >> n;
    std::string k; std::cin >> k;
    const int base = n % 10 + 2;
    int bonus = 0;
    for (char digit : k) {
        int d = ('0' <= digit && digit <= '9' ? digit - '0' : digit - 'A' + 10);
        bonus = bonus * base + d;
    }
    std::cout << bonus;
}