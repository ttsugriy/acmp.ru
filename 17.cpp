#include <iostream>
#include <vector>
#include <algorithm>

bool valid(std::vector<int> xs, int s) {
  if ((xs.size() - 1) % s != 0)
    return false;
  for (int i = s; i < xs.size(); ++i)
    if (xs[i - s] != xs[i])
      return false;
  return true;
}

std::vector<int> divs(int n) {
  std::vector<int> ds;
  ds.push_back(1);
  ds.push_back(n);
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      ds.push_back(i);
      if (i * i != n) ds.push_back(n / i);
    }
  }
  std::sort(ds.begin(), ds.end());
  return ds;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> xs;
  xs.reserve(n);
  for (int i = 0; i < n; ++i) {
    int x;
    std::cin >> x;
    xs.push_back(x);
  }
  for (int period : divs(n - 1)) {
    if (valid(xs, period)) {
      std::cout << period << std::endl;
      break;
    }
  }
}
