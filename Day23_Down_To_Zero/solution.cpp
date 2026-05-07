#include <bits/stdc++.h>
using namespace std;

int downToZero(int n) {
    queue<pair<int,int>> q;
    vector<bool> vis(n + 1, false);

    q.push({n, 0});
    vis[n] = true;

    while(!q.empty()) {

        int curr = q.front().first;
        int steps = q.front().second;
        q.pop();

        if(curr == 0) {
            return steps;
        }

        if(!vis[curr - 1]) {
            vis[curr - 1] = true;
            q.push({curr - 1, steps + 1});
        }

        for(int i = 2; i * i <= curr; i++) {

            if(curr % i == 0) {

                int next = max(i, curr / i);

                if(!vis[next]) {
                    vis[next] = true;
                    q.push({next, steps + 1});
                }
            }
        }
    }

    return -1;
}