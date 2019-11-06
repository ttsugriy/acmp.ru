#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string cmds; std::cin >> cmds;
    int current = 0;
    int lowest = current;
    int highest = current;
    for (char cmd : cmds) {
        current += cmd == '1' ? 1 : -1;
        lowest = std::min(lowest, current);
        highest = std::max(highest, current);
    }
    std::cout << highest - lowest + 1;
}