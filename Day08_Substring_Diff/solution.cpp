#include <bits/stdc++.h>
using namespace std;

int substringDiff(int k, string s1, string s2) {
    int n = s1.size(), m = s2.size();
    int ans = 0;

    for (int d = -n; d <= n; d++) {
        int i = max(0, d);
        int j = max(0, -d);

        int mismatch = 0, left = 0;

        for (int right = 0; i + right < n && j + right < m; right++) {
            if (s1[i + right] != s2[j + right]) mismatch++;

            while (mismatch > k) {
                if (s1[i + left] != s2[j + left]) mismatch--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }
    }

    return ans;
}

int main() {
    int k;
    string s1, s2;
    cin >> k >> s1 >> s2;

    cout << substringDiff(k, s1, s2) << endl;

    return 0;
}