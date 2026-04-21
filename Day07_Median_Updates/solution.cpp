#include <bits/stdc++.h>
using namespace std;

void printMedian(multiset<int>& low, multiset<int>& high) {
    if (low.empty() && high.empty()) {
        cout << "Wrong!" << endl;
        return;
    }

    if (low.size() > high.size()) {
        cout << *low.rbegin() << endl;
    }
    else if (low.size() < high.size()) {
        cout << *high.begin() << endl;
    }
    else {
        long long a = *low.rbegin();
        long long b = *high.begin();
        long long sum = a + b;

        if (sum % 2 == 0) cout << sum / 2 << endl;
        else cout << fixed << setprecision(1) << sum / 2.0 << endl;
    }
}

void rebalance(multiset<int>& low, multiset<int>& high) {
    if (low.size() > high.size() + 1) {
        high.insert(*low.rbegin());
        low.erase(prev(low.end()));
    }
    else if (high.size() > low.size() + 1) {
        low.insert(*high.begin());
        high.erase(high.begin());
    }
}

void median(vector<char> s, vector<int> X) {
    multiset<int> low, high;

    for (int i = 0; i < s.size(); i++) {
        int x = X[i];

        if (s[i] == 'a') {
            if (low.empty() || x <= *low.rbegin()) {
                low.insert(x);
            } else {
                high.insert(x);
            }
        }
        else {
            if (low.find(x) != low.end()) {
                low.erase(low.find(x));
            }
            else if (high.find(x) != high.end()) {
                high.erase(high.find(x));
            }
            else {
                cout << "Wrong!" << endl;
                continue;
            }
        }

        rebalance(low, high);
        printMedian(low, high);
    }
}