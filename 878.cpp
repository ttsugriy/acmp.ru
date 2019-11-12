#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>

int main() {
    std::string letters; std::cin >> letters;
    int indices[26]; std::iota(indices, indices + 26, 0);
    std::sort(indices, indices + 26, [&letters](int i1, int i2) {
        return letters[i1] < letters[i2];
    });
    for (int i = 0; i < 26; ++i) {
        if (letters[indices[i]] < 'A' + i) {
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES" << std::endl;
    for (int i = 0; i < 26; ++i) std::cout << indices[i] + 1 << ' ';
}