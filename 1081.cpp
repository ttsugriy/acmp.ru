#include <stdio.h>

const int MAX_N = 100000;

long long tree[MAX_N * 4];

int left_child(int v) {
    return 2 * v + 1;
}

int right_child(int v) {
    return 2 * v + 2;
}

void build(int v, int vl, int vr, int vals[]) {
    if (vl == vr) {
        tree[v] = vals[vl];
        return;
    }
    int mid = vl + (vr - vl) / 2;
    build(left_child(v), vl, mid, vals);
    build(right_child(v), mid + 1, vr, vals);
    tree[v] = tree[left_child(v)] + tree[right_child(v)];
}

long long query(int v, int vl, int vr, int l, int r) {
    if (r < vl || l > vr) return 0;
    if (l <= vl && vr <= r) return tree[v];
    int mid = vl + (vr - vl) / 2;
    return query(left_child(v), vl, mid, l, r) + query(right_child(v), mid + 1, vr, l, r);
}

int main() {
    int n; scanf("%d", &n);
    int vals[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &vals[i]);
    }
    build(0, 0, n-1, vals);
    int m; scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        int l, r; scanf("%d %d", &l, &r);
        printf("%lld ", query(0, 0, n - 1, l - 1, r - 1));
    }
    return 0;
}