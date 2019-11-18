#include <iostream>
#include <string>

int main() {
    std::string str; std::cin >> str;
    int count = 0;
    int col = 0;
    for (char ch : str) {
        if (std::isdigit(ch)) {
            count = count * 10 + ch - '0';
        } else {
            for (int i = 0; i < std::max(count, 1); ++i) {
                std::cout << ch;
                col += 1;
                if (col == 40) {
                    std::cout << std::endl;
                    col = 0;
                }
            }
            count = 0;
        }
    }
}