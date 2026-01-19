#include <bits/stdc++.h>
using namespace std;
 
int n, m, k;
vector<string> g;
int dista[505][505];
bool vis[505][505];
 
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
 
int main() {
    cin >> n >> m >> k;
    g.resize(n);
    for(int i = 0; i < n; i++)
        cin >> g[i];
 
    int sx = -1, sy = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == '.') {
                sx = i; sy = j;
                break;
            }
        }
        if(sx != -1) break;
    }
 
    queue<pair<int,int>> q;
    q.push({sx, sy});
    vis[sx][sy] = true;
    dista[sx][sy] = 0;
 
    vector<pair<int,pair<int,int>>> nodes; 
    nodes.push_back({0, {sx, sy}});
 
    while(!q.empty()){
        auto p = q.front(); q.pop();
        int x = p.first, y = p.second;
 
        for(int d = 0; d < 4; d++){
            int nx = x + dx[d];
            int ny = y + dy[d];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(vis[nx][ny] || g[nx][ny] == '#') continue;
 
            vis[nx][ny] = true;
            dista[nx][ny] = dista[x][y] + 1;
            nodes.push_back({dista[nx][ny], {nx, ny}});
            q.push({nx, ny});
        }
    }
 
    sort(nodes.begin(), nodes.end(), [&](auto &a, auto &b){
        return a.first > b.first;
    });
 
    for(int i = 0; i < k; i++){
        int x = nodes[i].second.first;
        int y = nodes[i].second.second;
        g[x][y] = 'X';
    }
 
    for(int i = 0; i < n; i++)
        cout << g[i] << "\n";
}
