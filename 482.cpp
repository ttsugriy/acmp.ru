#include <iostream>
#include <string>

int main() {
    int n; std::cin >> n;
    std::string seq;
    for (int k = 1; seq.size() < n; ++k) {
        for (int i = 1; i <= k && seq.size() < n; ++i) {
            seq += std::to_string(i);
        }
    }
    std::cout << seq[n-1];
}