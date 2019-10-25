#include <iostream>

int main() {
    char move;
    int state[3] = {1, 0, 0};
    while (std::cin >> move) {
        switch (move) {
            case 'A':
            std::swap(state[0], state[1]);
            break;
            case 'B':
            std::swap(state[1], state[2]);
            break;
            case 'C':
            std::swap(state[0], state[2]);
            break;
        }
    }
    std::cout << (state[0] ? 1 : state[1] ? 2 : 3);
}