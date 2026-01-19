#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll>a(n);
        set<ll>s;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
            mp[a[i]]++;
        }
        sort(a.begin(),a.end());
        ll cur=a[0];
        ll ans=0;
        for(auto it :s){
            ans+=max(1LL*0,(mp[it]-mp[it-1]));
        }
        cout<<ans<<"\n";
    }
    return 0;
}
