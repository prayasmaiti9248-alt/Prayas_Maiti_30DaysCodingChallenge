#include <bits/stdc++.h>
using namespace std;
long largestRectangle(vector<int> h) {
    stack<int> st;
    long ans = 0;
    int n = h.size();

    for(int i = 0; i <= n; i++) {

        int currHeight = (i == n) ? 0 : h[i];

        while(!st.empty() && currHeight < h[st.top()]) {

            int height = h[st.top()];
            st.pop();

            int right = i;

            int left;

            if(st.empty())
                left = -1;
            else
                left = st.top();

            long width = right - left - 1;

            ans = max(ans, 1L * height * width);
        }

        st.push(i);
    }

    return ans;
}