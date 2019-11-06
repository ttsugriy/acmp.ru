#include <iostream>

int main() {
    int n; std::cin >> n;
    int revenues[n]; for (int i = 0; i < n; ++i) std::cin >> revenues[i];
    int firm_no = 0;
    int max_payment = 0;
    for (int i = 0; i < n; ++i) {
        int tax; std::cin >> tax;
        int payment = revenues[i] * tax;
        if (payment > max_payment) {
            max_payment = payment;
            firm_no = i;
        }
    }
    std::cout << firm_no + 1;
}