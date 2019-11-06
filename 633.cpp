#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>

int main() {
    std::string team; std::getline(std::cin, team);
    std::cout << team << ": ";
    std::string names[3]; for (int i = 0; i < 3; ++i) std::cin >> names[i];
    std::sort(names, names + 3);
    std::copy(names, names + 2, std::ostream_iterator<std::string>(std::cout, ", "));
    std::cout << names[2];
}