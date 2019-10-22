#include <iostream>

int main() {
    int s1, s2, s3; std::cin >> s1 >> s2 >> s3;
    std::cout << (std::max(std::max(s1, s2), s3) - std::min(std::min(s1, s2), s3));
}