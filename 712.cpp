#include <algorithm>
#include <iostream>

int main() {
    int w, h, n; std::cin >> w >> h >> n;
    long long left = 0;
    long long right = 1;
    while ((right / w) * (right / h) < n) right <<= 1;

    while (left + 1 < right) {
        const long long side = left + (right - left) / 2;
        const long long count = (side / w) * (side / h);
        if (count < n) {
            left = side;
        } else {
            right = side;
        }
    }
    std::cout << right;
}