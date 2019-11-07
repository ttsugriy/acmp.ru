#include <cstdio>

int main() {
    char l; int x; scanf("%s%d", &l, &x);
    puts(x & 1 | l == 'H' ? "Yes" : "No");
}