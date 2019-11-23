#include <iostream>
#include <iomanip>

int main() {
    int t1, t2, s1, s2, s; std::cin >> t1 >> t2 >> s1 >> s2 >> s;
    int time = 0;
    int distance = 0;
    while (true) {
        if (distance + s1 >= s) {
            std::cout << std::fixed << std::setprecision(2) << time + (s - distance) / (static_cast<double>(s1) / t1);
            return 0;
        }
        time += t1 + t2;
        distance += s1 - s2;
        if (distance <= 0) {
            std::cout << "NO";
            return 0;
        }
    }
}