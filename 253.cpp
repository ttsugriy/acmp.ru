#include <iostream>

int main() {
    int sh, sm; std::cin >> sh >> sm;
    int eh, em; std::cin >> eh >> em;

    int start_mins = sh * 60 + sm;
    int end_mins = eh * 60 + em;
    if (start_mins > end_mins) end_mins += 24 * 60;
    int count = 0;
    for (int mins = start_mins; mins <= end_mins; ++mins) {
        int hours = mins / 60;
        while (hours > 12) hours -= 12;
        int minutes = mins % 60;
        if (minutes == 0) {
            count += hours;
        } else if (minutes == 30) {
            count += 1;
        }
    }
    std::cout << count;
}