#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    stack<int> is, os;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            is.push(x);
        }
        else if (type == 2) {
            if (os.empty()) {
                while (!is.empty()) {
                    os.push(is.top());
                    is.pop();
                }
            }
            if (!os.empty()) os.pop();
        }
        else if (type == 3) {
            if (os.empty()) {
                while (!is.empty()) {
                    os.push(is.top());
                    is.pop();
                }
            }
            if (!os.empty()) {
                cout << os.top() << endl;
            }
        }
    }

    return 0;
}