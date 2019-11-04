#include <iostream>
#include <string>

int main() {
    std::string seq; std::cin >> seq;
    for (int start = 0; start < seq.size(); ) {
        int end = start;
        while (end < seq.size() && seq[end] != '1') end += 1;
        std::cout << (char)('a' + (end - start));
        start = end + 1;
    }
}