#include <iostream>
#include <string>

int main() {
    const std::string arrows[2] = {">>-->", "<--<<"};

    std::string str; std::cin >> str;

    int count = 0;
    for (const auto& arrow : arrows) {
        for (int pos = 0; ; pos += 1) {
            pos = str.find(arrow, pos);
            if (pos == std::string::npos) break;
            count += 1;
        }
    }
    std::cout << count;
}