#include <iostream>
#include <string>

int main() {
    std::string n, m; std::cin >> n >> m;
    if (m == "0") {
        std::cout << "NO";
        return 0;
    }
    int carry = 1;
    for (int i = n.size() - 1; i >= 0 && carry; --i) {
        if (n[i] == '9') {
            n[i] = '0';
            carry = 1;
        } else {
            n[i] += 1;
            carry = 0;
        }
    }
    std::cout << n;
}