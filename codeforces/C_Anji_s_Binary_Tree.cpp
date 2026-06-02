#include<bits/stdc++.h>
using namespace std;

int dfs(vector<pair<int,int>>& a, int node, string &s){
    int left = a[node].first;
    int right = a[node].second;
    if(left == 0 && right == 0){
        return 0;
    }
    int ans = INT_MAX;
    if(left != 0){
        ans = min(ans,(s[node-1] != 'L') + dfs(a, left, s));
    }
    if(right != 0){
        ans = min(ans,(s[node-1] != 'R') + dfs(a, right, s));
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<pair<int,int>>a(n+1,{-1,-1});
        for(int i=1;i<=n;i++){
            int x,y;
            cin>>x>>y;
            a[i].first=x;
            a[i].second=y;
        }
        int ans=0;
        ans=dfs(a,1,s);
        cout<<ans<<"\n";
    }
    return 0;
}