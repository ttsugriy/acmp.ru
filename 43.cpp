#include <iostream>
#include <string>

int main() {
    std::string seq; std::cin >> seq;
    int longest = 0;
    int current = 0;
    for (int i = 0; i < seq.size(); ++i) {
        if (seq[i] == '0') {
            current += 1;
            longest = std::max(longest, current);
        } else {
            current = 0;
        }
    }
    std::cout << longest;
}