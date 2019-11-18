#include <iostream>
#include <string>

int to_digit(char ch) {
    return ch - '0';
}

int main() {
    std::string eq; std::cin >> eq;
    char op = eq[1];
    if (eq[0] == 'x') {
        if (op == '+') {
            std::cout << to_digit(eq.back()) - to_digit(eq[2]);
        } else {
            std::cout << to_digit(eq.back()) + to_digit(eq[2]);
        }
    } else if (eq[2] == 'x') {
        if (op == '+') {
            std::cout << to_digit(eq.back()) - to_digit(eq[0]);
        } else {
            std::cout << to_digit(eq.front()) - to_digit(eq.back());
        }
    } else {
        if (op == '+') {
            std::cout << to_digit(eq.front()) + to_digit(eq[2]);
        } else {
            std::cout << to_digit(eq.front()) - to_digit(eq[2]);
        }
    }
}