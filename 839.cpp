#include <iostream>
#include <string>

int main() {
    std::string seq; std::cin >> seq;
    std::cout << (seq.find('0') == std::string::npos ? "YES" : "NO");
}