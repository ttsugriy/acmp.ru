#include <cstdio>

int main() {
    char n[10001]; scanf("%s", n);
    int diff = 0;
    for (int i = 0; n[i]; ++i) {
        char digit = n[i] - '0';
        diff += ((i&1) ? -digit : digit);
    }
    printf(diff % 11 == 0 ? "YES" : "NO");
}