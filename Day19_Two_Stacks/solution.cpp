#include <bits/stdc++.h>
using namespace std;

int twoStacks(int maxSum, vector<int> a, vector<int> b) {
    int count_a = 0, count_b = 0;
    int curr_sum = 0;

    while (count_a < a.size() && curr_sum + a[count_a] <= maxSum) {
        curr_sum += a[count_a];
        count_a++;
    }

    int max_elements = count_a;

    
    for (int i = 0; i < b.size(); i++) {
        curr_sum += b[i];
        count_b++;

        
        while (curr_sum > maxSum && count_a > 0) {
            count_a--;
            curr_sum -= a[count_a];   
        }

        if (curr_sum <= maxSum) {
            max_elements = max(max_elements, count_a + count_b);
        } else {
            break;
        }
    }

    return max_elements;
}

int main() {
    int maxSum, n, m;
    cin >> maxSum >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    cout << twoStacks(maxSum, a, b);

    return 0;
}