#include <iostream>
#include <string>

int main() {
    int troom, tcond; std::cin >> troom >> tcond;
    std::string mode; std::cin >> mode;
    if (mode == "freeze") {
        std::cout << std::min(troom, tcond);
    } else if (mode == "heat") {
        std::cout << std::max(troom, tcond);
    } else if (mode == "auto") {
        std::cout << tcond;
    } else {
        std::cout << troom;
    }
}