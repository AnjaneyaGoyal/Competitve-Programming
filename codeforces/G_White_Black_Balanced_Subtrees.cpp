#include<bits/stdc++.h>
using namespace std;

int ans;
int dfs(vector<vector<int>>& adj, int node, int parent, string& s){
    int sum;
    if(s[node-1] == 'B'){
        sum = 1;
    }
    else{
        sum = -1;
    }
    for(int child : adj[node]){
        if(child == parent){
            continue;
        }
        sum += dfs(adj, child, node, s);
    }
    if(sum == 0){
        ans++;
    }

    return sum;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n-1);
        for(int i = 0; i < n-1; i++){
            cin >> a[i];
        }
        vector<vector<int>> adj(n + 1);
        for(int i = 0; i < n-1; i++){
            int p = a[i];
            adj[p].push_back(i + 2);
            adj[i + 2].push_back(p);
        }
        string s;
        cin >> s;
        ans = 0;
        dfs(adj, 1, 0, s);
        cout << ans << '\n';
    }
}