#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class IntervalTree {
private:
    vector<int> tree;

    void build(int v, int vl, int vr, const vector<int>& vals) {
        if (vl == vr) {
            tree[v] = vals[vl];
            return;
        }
        int mid = vl + (vr - vl) / 2;
        build(left_child(v), vl, mid, vals);
        build(right_child(v), mid + 1, vr, vals);
        tree[v] = tree[left_child(v)] + tree[right_child(v)];
    }

    int left_child(int v) {
        return 2 * v + 1;
    }

    int right_child(int v) {
        return 2 * v + 2;
    }

    int query(int v, int vl, int vr, int l, int r) {
        if (r < vl || l > vr) return 0;
        if (l <= vl && vr <= r) return tree[v];
        int mid = vl + (vr - vl) / 2;
        return query(left_child(v), vl, mid, l, r) + query(right_child(v), mid + 1, vr, l, r);
    }
public:
    IntervalTree(const vector<int>& vals): tree(vals.size() * 4) {
        build(0, 0, vals.size() - 1, vals);
    }

    int query(int l, int r) {
        return query(0, 0, tree.size() / 4 - 1, l, r);
    }

    void dump() const {
        copy(tree.cbegin(), tree.cend(), ostream_iterator<int>(cout, " ")); cout << endl;
    }
};

int main() {
    int n; cin >> n;
    vector<int> vals(n);
    for (int i = 0; i < n; ++i) {
        cin >> vals[i];
    }
    IntervalTree tree(vals);
    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        int l, r; cin >> l >> r;
        cout << tree.query(l - 1, r - 1) << ' ';
    }
    return 0;
}