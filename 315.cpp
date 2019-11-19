#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string n;
    std::getline(std::cin, n);
    char max_char = -1;
    for (char ch : n) {
        if (!(ch >= '0' && ch <= '9' || ch >= 'A' && ch <= 'Z')) {
            std::cout << -1;
            return 0;
        }
        if (ch > max_char) max_char = ch;
    }
    std::cout << std::max(2, (isdigit(max_char) ? max_char - '0' : max_char - 'A' + 10) + 1);
}