#include <iostream>
#include <string>

int main() {
    std::string n; std::cin >> n;
    std::cout << 1;
    for (int i = n.size()-1; i >= 0 && n[i] == '0'; --i) {
        std::cout << 0;
    }
}