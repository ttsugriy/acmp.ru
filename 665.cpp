#include <cstdio>

bool is_palindrome(int time) {
    char minutes[3]; sprintf(minutes, "%02d", time % 60);
    char hours[3]; sprintf(hours, "%02d", time / 60);
    return minutes[0] == hours[1] && minutes[1] == hours[0];
}

int main() {
    int hours, minutes; scanf("%d:%d", &hours, &minutes);
    int time = hours * 60 + minutes;
    const int minutes_in_a_day = 24 * 60;
    for (int candidate = (time + 1) % minutes_in_a_day; ; candidate = (candidate + 1) % minutes_in_a_day) {
        if (is_palindrome(candidate)) {
            printf("%02d:%02d", candidate / 60, candidate % 60);
            return 0;
        }
    }
}