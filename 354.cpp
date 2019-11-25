#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    bool first = true;
    for (int d = 2; d <= n / d; ++d) {
        while (n % d == 0) {
            if (!first) {
                printf("*%d", d);
            } else {
                first = false;
                printf("%d", d);
            }
            n /= d;
        }
    }
    if (n != 1) {
        if (first) printf("%d", n); else printf("*%d", n);
    }
    
}