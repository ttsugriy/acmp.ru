#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int evens[n];
    int even_count = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        if ((x & 1) == 0) {
            evens[even_count++] = x;
        } else {
            cout << x << ' ';
        }
    }
    cout << '\n';
    for (int i = 0; i < even_count; ++i) cout << evens[i] << ' ';
    cout << "\n" << (even_count * 2 >= n ? "YES" : "NO");
    return 0;
}