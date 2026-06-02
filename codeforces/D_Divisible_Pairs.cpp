#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll x,y;
        cin>>n>>x>>y;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=0;

        map<pair<ll,ll>,ll>mp;

        for(ll i=0;i<n;i++){
            ll x1=a[i]%x;
            ll rx=(x-x1)%x;
            ll ry=a[i]%y;
            ans+=mp[{rx,ry}];
            mp[{x1,ry}]++;
        }

        cout<<ans<<"\n";
    }
    return 0;
}