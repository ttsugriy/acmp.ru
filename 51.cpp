#include <iostream>
#include <string>

int main() {
    long n; std::cin >> n;
    std::string bangs; std::cin >> bangs;
    const long k = bangs.size();
    long fact = 1;
    for (long d = 0; d < n; d += k) {
        fact *= (n - d);
    }
    std::cout << fact;
}