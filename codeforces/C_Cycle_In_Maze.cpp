#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<string> s(n);
    int sx, sy;

    for(int i = 0; i < n; i++){
        cin >> s[i];
        for(int j = 0; j < m; j++){
            if(s[i][j] == 'X'){
                sx = i;
                sy = j;
            }
        }
    }

    if(k % 2 == 1){
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int,int>> q;
    q.push({sx, sy});
    dist[sx][sy] = 0;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    // BFS
    while(!q.empty()){
        int bx = q.front().first;
        int by = q.front().second;
        q.pop();

        for(int d = 0; d < 4; d++){
            int nx = bx + dx[d];
            int ny = by + dy[d];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(s[nx][ny] == '*' || dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[bx][by] + 1;
            q.push({nx, ny});
        }
    }

    vector<char> dir = {'D','L','R','U'};
    int dx2[4] = {1, 0, 0, -1};
    int dy2[4] = {0, -1, 1, 0};

    string ans = "";
    int cx = sx, cy = sy;

    for(int step = 0; step < k; step++){
        bool ok = false;
        for(int d = 0; d < 4; d++){
            int nx = cx + dx2[d];
            int ny = cy + dy2[d];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(s[nx][ny] == '*') continue;

            int rem = k - step - 1;

            if(dist[nx][ny] != -1 &&
               dist[nx][ny] <= rem &&
               (rem - dist[nx][ny]) % 2 == 0){

                ans += dir[d];
                cx = nx;
                cy = ny;
                ok = true;
                break;
            }
        }

        if(!ok){
            cout << "IMPOSSIBLE\n";
            return 0;
        }
    }

    cout << ans << "\n";
    return 0;
}
