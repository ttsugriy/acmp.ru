#include <iostream>
#include <string>

int char_to_digit(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }
    return 10 + ch - 'A';
}

char decode_digit(int d) {
    return d == 26 ? ' ' : 'a' + d;
}

int main() {
    std::string code; std::cin >> code;
    for (int i = 0; i < code.size(); ++i) {
        int d = char_to_digit(code[i]);
        d = d - i - 1 - 1;
        while (d < 0) d += 27;
        std::cout << decode_digit(d);
    }
}