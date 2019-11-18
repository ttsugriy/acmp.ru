#include <iostream>
#include <string>

int main() {
    std::string a, b; std::cin >> a >> b;
    int cows = 0;
    int bulls = 0;
    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j < b.size(); ++j) {
            bulls += a[i] == b[j] && i == j;
            cows += a[i] == b[j] && i != j;
        }
    }
    std::cout << bulls << ' ' << cows;
}