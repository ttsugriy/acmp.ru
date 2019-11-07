#include <iostream>

enum Color {
    RED = 1 << 0,
    GREEN = 1 << 1,
    BLUE = 1 << 2,
    BLACK = 1 << 3,
};

const int codes[8] = {
    BLACK,
    BLACK | BLUE,
    BLACK | GREEN,
    BLACK | GREEN | BLUE,
    BLACK | RED,
    BLACK | RED | BLUE,
    BLACK | RED | GREEN,
    BLACK | RED | GREEN | BLUE,
};

int to_color(char name) {
    switch (name) {
        case 'R':
        return RED;
        case 'G':
        return GREEN;
        case 'B':
        return BLUE;
    }
    return BLACK;
}

int main() {
    int n, m; std::cin >> n >> m;
    char display[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> display[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int code; std::cin >> code;
            int supported_colors = codes[code];
            if (!(supported_colors & to_color(display[i][j]))) {
                std::cout << "NO";
                return 0;
            }
        }
    }
    std::cout << "YES";
}