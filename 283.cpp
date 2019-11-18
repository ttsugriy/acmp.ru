#include <iostream>
#include <string>

int main() {
    std::string word; std::cin >> word;
    if (std::islower(word.front())) {
        std::cout << "No";
        return 0;
    }
    int rune_size = 2;
    for (char ch : word) {
        if (std::isupper(ch)) {
            if (rune_size < 2 || rune_size > 4) {
                std::cout << "No";
                return 0;
            }
            rune_size = 1;
        } else {
            rune_size += 1;
        }
    }
    std::cout << (rune_size < 2 || rune_size > 4 ? "No" : "Yes");
}