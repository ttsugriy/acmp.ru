#include <stdio.h>

int main() {
    int h, m, hd, md;
    scanf("%d:%d", &h, &m);
    scanf("%d %d", &hd, &md);
    int minutes = m + md;
    printf("%02d:%02d", (h + hd + minutes / 60) % 24, minutes % 60);
}