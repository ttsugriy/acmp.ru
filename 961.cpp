#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    char state1[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) std::cin >> state1[i][j];
    }
    char state2[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) std::cin >> state2[i][j];
    }
    bool moved[128] = {false};
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (state1[i][j] != state2[i][j]) {
                char symbol = state1[i][j] == '.' ? state2[i][j] : state1[i][j];
                count += !moved[symbol];
                moved[symbol] = true;
            }
        }
    }
    std::cout << count << std::endl;
    for (char i = 'a'; i <= 'z'; ++i) {
        if (moved[i]) std::cout << i;
    }
    for (char i = 'A'; i <= 'Z'; ++i) {
        if (moved[i]) std::cout << i;
    }
}