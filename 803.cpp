#include <cstdio>

int main() {
    long a, b, k; scanf("%d %d %d", &a, &b, &k);
    a %= b;
    int div = 0;
    for (int i = 0; i < k; ++i) {
        while (a != 0 && a < b) {
            a *= 10;
        }
        div = a / b;
        a = a % b;
    }
    printf("%d", div);
}