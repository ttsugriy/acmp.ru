#include <iostream>

bool wins(char board[3][3], char ch) {
    for (int i = 0; i < 3; ++i) {
        int count = 0;
        for (int j = 0; j < 3; ++j) {
            count += board[i][j] == ch;
        }
        if (count == 3) return true;
    }
    for (int j = 0; j < 3; ++j) {
        int count = 0;
        for (int i = 0; i < 3; ++i) {
            count += board[i][j] == ch;
        }
        if (count == 3) return true;
    }
    return 
        (board[0][0] == ch && board[1][1] == ch && board[2][2] == ch) ||
        (board[2][0] == ch && board[1][1] == ch && board[0][2] == ch);
}

int main() {
    char board[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> board[i][j];
        }
    }
    if (wins(board, 'X')) {
        std::cout << "Win";
    } else if (wins(board, 'O')) {
        std::cout << "Lose";
    } else {
        std::cout << "Draw";
    }
}