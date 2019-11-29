#include <algorithm>
#include <iostream>
#include <vector>

struct Team {
    int id;
    int solved;
};

int main() {
    int n, m; std::cin >> n >> m;
    std::vector<int> promoted;
    std::vector<Team> base;
    int ignore;
    for (int i = 0; i < n; ++i) {
        Team team; std::cin >> team.id >> team.solved >> ignore;
        if (team.solved > 0) base.push_back(team);
    }
    for (int i = 0; i < m; ++i) {
        Team team; std::cin >> team.id >> team.solved >> ignore;
        if (team.solved > 0) promoted.push_back(team.id);
    }
    std::sort(base.begin(), base.end(), [](const Team& t1, const Team& t2) {
        return t1.solved > t2.solved;
    });
    if (base.size() > 1) {
        const int median = base.size() / 2 - 1;
        for (int i = 0; i < base.size(); ++i) {
            if (base[i].solved > base[median].solved || base[i].solved == base.front().solved) {
                promoted.push_back(base[i].id);
            }
        }
    }
    std::sort(promoted.begin(), promoted.end());
    std::cout << promoted.size() << std::endl;
    for (const auto& team : promoted) {
        std::cout << team << ' ';
    }
}