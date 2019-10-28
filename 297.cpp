#include <iostream>
#include <string>

static int count_in(char ch) {
    switch (ch) {
        case '0':
        case '6':
        case '9':
        return 1;
        case '8':
        return 2;
    }
    return 0;
}

int main() {
    std::string n; std::cin >> n;
    int count = 0;
    for (int i = 0; i < n.size(); ++i) count += count_in(n[i]);
    std::cout << count;
}