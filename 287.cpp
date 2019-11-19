#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    int n, m; std::cin >> n >> m;
    std::string lecture; std::cin >> lecture;
    std::unordered_set<std::string> words;
    for (int start = 0; start <= n - m; start += 1) {
        words.insert(lecture.substr(start, m));
    }
    std::cout << words.size();
}