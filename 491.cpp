#include <iostream>
#include <string>

int main() {
    std::string s; std::cin >> s;
    bool all_same = true;
    for (int i = 1; i < s.size(); ++i) {
        all_same = all_same && s[i] == s[0];
    }
    if (all_same) {
        std::cout << "NO SOLUTION";
        return 0;
    }
    for (int left = 0, right = s.size() - 1; left < right; ++left, --right) {
        if (s[left] != s[right]) {
            std::cout << s;
            return 0;
        }
    }
    std::cout << s.substr(1);
}