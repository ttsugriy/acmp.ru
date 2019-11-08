#include <iostream>

int digit_sum(int n, int base) {
    int sum = 0;
    while (n) {
        sum += n % base;
        n /= base;
    }
    return sum;
}

int main() {
    int n1, p1, n2, p2; std::cin >> n1 >> p1 >> n2 >> p2;
    int ds1 = digit_sum(n1, p1);
    int ds2 = digit_sum(n2, p2);
    std::cout << (ds1 == ds2 ? ds1 : 0);
}