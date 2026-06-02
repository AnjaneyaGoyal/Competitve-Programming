#include<bits/stdc++.h>
using namespace std;

bool check(int k, vector<pair<int,int>>& a,int n){
    int L = 0,R = 0;
    int l,r;

    for(int i=0;i<n;i++){
        l=a[i].first;
        r=a[i].second;
        L = max(L-k, l);
        R = min(R+k, r);
        if(L > R){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            a[i].first=x;
            a[i].second=y;
        }
        int l=0,r=1e9;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,a,n)){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}