#include <iostream>

int main() {
    int n; std::cin >> n;
    int xs[n];
    for (int i = 0; i < n; ++i) std::cin >> xs[i];
    int left = 0;
    int right = n - 1;
    int score[2] = {0};
    for (int i = 0; i < n; ++i) {
        if (xs[left] >= xs[right]) {
            score[i % 2] += xs[left++];
        } else {
            score[i % 2] += xs[right--];
        }
    }
    std::cout << score[0] << ':' << score[1];
}