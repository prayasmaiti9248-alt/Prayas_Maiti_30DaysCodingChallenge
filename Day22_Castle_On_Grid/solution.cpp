#include <bits/stdc++.h>
using namespace std;

int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {
    int n = grid.size();

    queue<pair<int,int>> q;
    vector<vector<int>> dist(n, vector<int>(n, -1));

    q.push({startX, startY});
    dist[startX][startY] = 0;

    vector<pair<int,int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    while(!q.empty()){
        auto [x, y] = q.front();
        q.pop();

        if(x == goalX && y == goalY){
            return dist[x][y];
        }

        for(auto [dx, dy] : dirs){
            int nx = x;
            int ny = y;

            while(true){
                nx += dx;
                ny += dy;

                if(nx < 0 || ny < 0 || nx >= n || ny >= n) break;
                if(grid[nx][ny] == 'X') break;

                if(dist[nx][ny] == -1){
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    return -1;
}