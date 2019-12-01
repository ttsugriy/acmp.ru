#include <iostream>
#include <string>

int main() {
    std::string n; std::cin >> n;
    std::string seq;
    for (int i = 1; ; ++i) {
        seq += std::to_string(i);
        int idx = seq.find(n);
        if (idx != std::string::npos) {
            std::cout << idx + 1;
            return 0;
        }
    }
}