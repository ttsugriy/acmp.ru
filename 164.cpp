#include <iostream>
#include <string>

int digital_root(const std::string& ticket, int start, int end) {
    int sum = 0;
    for (int i = start; i < end; ++i) sum += ticket[i] - '0';
    while (sum >= 10) {
        int new_sum = 0;
        while (sum > 0) {
            new_sum += sum % 10;
            sum /= 10;
        }
        sum = new_sum;
    }
    return sum;
}

int main() {
    std::string ticket; std::cin >> ticket;
    for (int split = 1; split < ticket.size(); ++split) {
        if (digital_root(ticket, 0, split) == digital_root(ticket, split, ticket.size())) {
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
}