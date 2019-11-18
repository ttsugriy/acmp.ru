#include <iostream>

const int MAX_LEN = 100000;

int main() {
    char s1[MAX_LEN + 1], s2[MAX_LEN+1]; std::cin >> s1 >> s2;
    int counts[26] = {0};
    for (int i = 0; s1[i] != 0; ++i) counts[s1[i] - 'A'] += 1;
    for (int i = 0; s2[i] != 0; ++i) counts[s2[i] - 'A'] -= 1;
    for (int i = 0; i < 26; ++i) {
        if (counts[i] != 0) {
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES";
}