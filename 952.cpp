#include <algorithm>
#include <iostream>

int main() {
    int n, m; std::cin >> n >> m;
    if (n == 0 && m == 0) {
        std::cout << 0 << ' ' << 0;
    } else if (n == 0) {
        std::cout << "Impossible";
    } else {
        // min can be achieved by assigning each child to an adult so that they all get a free ride
        // max can be achieved by assigning all children to the same adult so that he has to pay for each but one child
        std::cout << n + std::max(0, m - n) << ' ' << n + std::max(0, m - 1);
    }
}