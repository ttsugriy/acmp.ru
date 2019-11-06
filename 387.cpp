#include <iostream>
#include <string>

int main() {
    int n; std::cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        std::string production; std::cin >> production;
        count += production[0] == production[3];
    }
    std::cout << count;
}