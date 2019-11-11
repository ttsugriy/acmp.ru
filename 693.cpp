#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string word1, word2; std::cin >> word1 >> word2;
    int counts[26] = {0};
    for (char ch : word1) counts[tolower(ch) - 'a'] += 1;
    for (char ch : word2) counts[tolower(ch) - 'a'] -= 1;
    for (int i = 0; i < 26; ++i) {
        if (counts[i] != 0) {
            std::cout << "No";
            return 0;
        }
    }
    std::cout << "Yes";
}