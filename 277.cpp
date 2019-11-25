#include <cstdio>
#include <cstdlib>

int main() {
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    if (a != 0) printf("%d", a);
    if (b != 0) {
        if (b == 1) {
            if (a == 0) {
                printf("x");
            } else {
                printf("+x");
            }
        } else if (b == -1) {
            printf("-x");
        } else if (b > 0) {
            if (a == 0) {
                printf("%dx", b);
            } else {
                printf("+%dx", b);
            }
        } else {
            printf("%dx", b);
        }
    }

    if (c != 0) {
        if (c == 1) {
            if (a == 0 && b == 0) {
                printf("y");
            } else {
                printf("+y");
            }
        } else if (c == -1) {
            printf("-y");
        } else if (c > 0) {
            if (a == 0 && b == 0) {
                printf("%dy", c);
            } else {
                printf("+%dy", c);
            }
        } else {
            printf("%dy", c);
        }
    }
    if (a == 0 && b == 0 && c == 0) printf("0");
}