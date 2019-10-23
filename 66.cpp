#include <iostream>
#include <algorithm>

const char letters[26] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's','d', 'f','g','h','j','k','l','z','x','c','v','b','n','m'};

int main() {
    char ch; std::cin >> ch;
    int idx = std::find(letters, letters + 26, ch) - letters;
    std::cout << letters[(idx + 1) % 26];
}