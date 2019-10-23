#include <iostream>
#include <string>

int main() {
    int k; std::string word; std::cin >> k >> word;
    std::cout << word.substr(0, k-1) + word.substr(k);
}