#include <iostream>
#include <string>

int main() {
    int n; std::cin >> n;
    if (n == 0) {
        std::cout << "3";
        return 0;
    }
    int end = n + 1;
    std::string e = "2.7182818284590452353602875";
    e[end] += e[end+1] >= '5';
    std::cout << e.substr(0, end + 1);
}