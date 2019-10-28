#include <iostream>

static bool is_valid_letter(char ch) {
    return ch == 'A' || ch == 'B' || ch == 'C' || ch == 'E'
     || ch == 'H' || ch == 'K' || ch == 'M' || ch == 'O'
     || ch == 'P' || ch == 'T' || ch =='X' || ch == 'Y';
}

static bool is_valid_plate(const std::string& plate) {
    if (plate.size() != 6) return false;
    return is_valid_letter(plate.front())
        && isdigit(plate[1]) && isdigit(plate[2]) && isdigit(plate[3])
        && is_valid_letter(plate[4]) && is_valid_letter(plate.back());
}

int main() {
    int n; std::cin >> n;
    std::string plate;
    for (int i = 0; i < n; ++i) {
         std::cin >> plate;
         std::cout << (is_valid_plate(plate) ? "Yes" : "No") << std::endl;
    }
}