#include <algorithm>
#include <iostream>
#include <iterator>

static int counts[100];

int main() {
    int n, m; std::cin >> n >> m;
    for (int _ = 0; _ < m; ++_) {
        int i, j; std::cin >> i >> j;
        counts[i-1] += 1;
        counts[j-1] += 1;
    }
    std::copy(counts, counts + n, std::ostream_iterator<int>(std::cout, " "));
}