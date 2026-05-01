#include <bits/stdc++.h>
using namespace std;

int flatlandSpaceStations(int n, vector<int> c) {
    sort(c.begin(), c.end());

    int ans = max(c[0], (n - 1) - c.back());

    for (int i = 1; i < c.size(); i++) {
        int gap = (c[i] - c[i - 1]) / 2;
        ans = max(ans, gap);
    }

    return ans;
}

int main() {
    int n = 5;
    vector<int> stations = {0, 4};

    cout << flatlandSpaceStations(n, stations) << endl;

    return 0;
}