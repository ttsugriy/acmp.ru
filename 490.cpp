#include <cstdio>

int main() {
    int pd, pm, py; scanf("%02d.%02d.%02d", &pd, &pm, &py);
    int vd, vm, vy; scanf("%02d.%02d.%02d", &vd, &vm, &vy);
    const int days_in_month[13] = {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
    };
    int d = 0;
    for (; !(pd == vd && pm == vm && py == vy); ++d) {
        pd += 1;
        if (pd > days_in_month[pm]) {
            pd = 1;
            pm += 1;
        }
        if (pm > 12) {
            pm = 1;
            py += 1;
        }
    }
    printf("%d", d);
}