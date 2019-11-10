#include <algorithm>
#include <iostream>

int main() {
    int n; std::cin >> n;
    int times[n];
    for (int i = 0; i < n; ++i) {
        int hours, minutes, seconds;
        std::cin >> hours >> minutes >> seconds;
        times[i] = hours * 60 * 60 + minutes * 60 + seconds;
    }
    std::sort(times, times + n);
    for (int i = 0; i < n; ++i) {
        int seconds = times[i] % 60;
        times[i] /= 60;
        int minutes = times[i] % 60;
        times[i] /= 60;
        int hours = times[i];
        std::cout << hours << ' ' << minutes << ' ' << seconds << std::endl;
    }
}