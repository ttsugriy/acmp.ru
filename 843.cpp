#include <iostream>

int main() {
    long long n, m, f, l; std::cin >> n >> m >> f >> l;
    // n = m + f - both + l
    // both = m + f - n + l
    // only_f = f - both
    // only_m = m - both
    long long both = m + f - n + l;
    std::cout << both << ' ' << (m - both) << ' ' << (f - both);
}