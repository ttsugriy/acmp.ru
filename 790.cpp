#include <algorithm>
#include <cstdio>
#include <string>

static char digit_to_char(int d) {
    if (d >= 0 && d <= 9) {
        return d + '0';
    }
    return d + 'A' - 10;
}

static std::string to_base(int x, int base) {
    std::string res;
    for (; x > 0; x /= base) {
        res.append(1, digit_to_char(x % base));
    }
    std::reverse(res.begin(), res.end());
    return res;
}

int main() {
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);
    int base = d + 1;
    printf("%s/%s/%s", to_base(d, base).c_str(), to_base(m, base).c_str(), to_base(y, base).c_str());
}