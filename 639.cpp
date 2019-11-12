#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    int n; std::cin >> n;
    std::vector<double> scores;
    std::vector<std::string> names;
    std::vector<int> order;
    for (int i = 0; i < n; ++i) {
        int count; std::cin >> count;
        for (int j = 0; j < count; ++j) {
            double score; std::cin >> score;
            scores.push_back(score);
            std::string name; std::cin >> name;
            names.push_back(name);
            order.push_back(order.size());
        }
    }
    std::sort(order.begin(), order.end(), [&scores](int i1, int i2) {
        return scores[i1] > scores[i2];
    });
    std::cout << order.size() << std::endl;
    for (int i = 0; i < order.size(); ++i) {
        std::cout << std::fixed << std::setprecision(2) << scores[order[i]] << ' ' << names[order[i]] << std::endl;
    }
}