#include <iostream>
#include <limits>

int main() {
    int n; std::cin >> n;
    const long pairs_per_bundle = 12;
    const long bundles_per_box = 12;
    const long pairs_per_box = bundles_per_box * pairs_per_bundle;
    const long pair_price = 1050;
    const long bundle_price = 10250;
    const long box_price = 114000;
    int boxes = n / pairs_per_box;
    n -= boxes * pairs_per_box;
    
    long min_cost = std::numeric_limits<int>::max();
    int min_p = 0;
    int min_b = 0;
    int min_bo = 0;

    for (int p = 0; p <= n; ++p) {
        for (int b = 0; b <= n; ++b) {
            for (int bo = 0; bo <= n; ++bo) {
                if ((p + b * pairs_per_bundle + bo * pairs_per_box) < n) {
                    continue;
                }
                long cost = p * pair_price + b * bundle_price + bo * box_price;
                if (cost < min_cost) {
                    min_cost = cost;
                    min_p = p;
                    min_b = b;
                    min_bo = bo;
                }
            }
        }
    }

    boxes += min_bo;
    std::cout << boxes << ' ' << min_b << ' ' << min_p;
    return 0;
}