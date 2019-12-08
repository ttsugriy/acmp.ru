#include <iostream>
#include <string>

int main() {
    std::string text; std::cin >> text;
    int prev = 1;
    int curr = 1;
    while (curr <= text.size()) {
        std::cout << text[curr-1];
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
}