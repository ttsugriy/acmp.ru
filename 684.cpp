#include <cstdio>
#include <cstdlib>

int main() {
    char src[3]; scanf("%s", src);
    char dest[3]; scanf("%s", dest);
    if (((src[0] + src[1]) & 1) ^ ((dest[0] + dest[1]) & 1)) { // different color
        printf("NO");
        return 0;
    }

    int dl = dest[0] - src[0];
    int dd = dest[1] - src[1];

    printf("%s", dd >= std::abs(dl) ? "YES" : "NO");
}