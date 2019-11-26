#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string n; std::cin >> n;
    std::unordered_set<std::string> nums;
    for (int i1 = 0; i1 < n.size(); ++i1) {
        if (n[i1] == '0') continue;
        for (int i2 = i1 + 1; i2 < n.size(); ++i2) {
            for (int i3 = i2 + 1; i3 < n.size(); ++i3) {
                char chars[4] = {n[i1], n[i2], n[i3], 0};
                nums.insert(chars);
            }
        }
    }
    std::cout << nums.size();
}