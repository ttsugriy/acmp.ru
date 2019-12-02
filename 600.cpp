#include <iostream>
#include <string>

static bool belongs(const std::string& word) {
    if (word.size() % 3 != 0) return false;
    const int group_size = word.size() / 3;
    for (int i = 0; i < group_size; ++i) {
        if (word[i] != '0') return false;
    }
    for (int i = group_size; i < group_size * 2; ++i) {
        if (word[i] != '1') return false;
    }
    for (int i = group_size * 2; i < word.size(); ++i) {
        if (word[i] != '2') return false;
    }
    return true;
}

int main() {
    int n; std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string word; std::cin >> word;
        std::cout << (belongs(word) ? "YES" : "NO") << std::endl;
    }
}