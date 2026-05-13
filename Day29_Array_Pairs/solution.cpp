#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<int> a;

/* ---------- Sparse Table for Maximum Index ---------- */

vector<vector<int>> st;
vector<int> lg2v;

int better(int x, int y) {
    return (a[x] > a[y]) ? x : y;
}

void buildSparse(int n) {
    lg2v.resize(n + 1);

    for (int i = 2; i <= n; i++)
        lg2v[i] = lg2v[i / 2] + 1;

    int K = lg2v[n] + 1;

    st.assign(K, vector<int>(n));

    for (int i = 0; i < n; i++)
        st[0][i] = i;

    for (int k = 1; k < K; k++) {

        for (int i = 0; i + (1 << k) <= n; i++) {

            st[k][i] = better(
                st[k - 1][i],
                st[k - 1][i + (1 << (k - 1))]
            );
        }
    }
}

int getMaxIndex(int l, int r) {

    int k = lg2v[r - l + 1];

    return better(
        st[k][l],
        st[k][r - (1 << k) + 1]
    );
}

/* ---------- Merge Sort Tree ---------- */

vector<vector<int>> seg;

void buildSeg(int node, int l, int r) {

    if (l == r) {
        seg[node] = {a[l]};
        return;
    }

    int mid = (l + r) >> 1;

    buildSeg(node << 1, l, mid);
    buildSeg(node << 1 | 1, mid + 1, r);

    merge(
        seg[node << 1].begin(),
        seg[node << 1].end(),

        seg[node << 1 | 1].begin(),
        seg[node << 1 | 1].end(),

        back_inserter(seg[node])
    );
}

int query(int node, int l, int r,
          int ql, int qr, int val) {

    if (r < ql || l > qr)
        return 0;

    if (ql <= l && r <= qr) {

        return upper_bound(
                   seg[node].begin(),
                   seg[node].end(),
                   val
               ) - seg[node].begin();
    }

    int mid = (l + r) >> 1;

    return query(node << 1, l, mid,
                 ql, qr, val)

           +

           query(node << 1 | 1, mid + 1, r,
                 ql, qr, val);
}

/* ---------- Divide and Conquer ---------- */

ll solveRec(int l, int r) {

    if (l >= r)
        return 0;

    int m = getMaxIndex(l, r);

    ll ans = 0;

    ans += solveRec(l, m - 1);
    ans += solveRec(m + 1, r);

    ans += query(
        1, 0, a.size() - 1,
        l, m - 1,
        1
    );

    ans += query(
        1, 0, a.size() - 1,
        m + 1, r,
        1
    );

    if ((m - l) < (r - m)) {

        for (int i = l; i < m; i++) {

            int lim = a[m] / a[i];

            ans += query(
                1, 0, a.size() - 1,
                m + 1, r,
                lim
            );
        }

    } else {

        for (int i = m + 1; i <= r; i++) {

            int lim = a[m] / a[i];

            ans += query(
                1, 0, a.size() - 1,
                l, m - 1,
                lim
            );
        }
    }

    return ans;
}

long solve(vector<int> arr) {

    a = arr;

    int n = a.size();

    buildSparse(n);

    seg.assign(4 * n + 5, {});
    buildSeg(1, 0, n - 1);

    return solveRec(0, n - 1);
}