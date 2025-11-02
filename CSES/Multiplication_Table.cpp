#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool count(ll mid,ll n){
    ll counta=0;
    for(int i=1;i<=n;i++){
        counta+=min(n,mid/i);
    }
    return counta>=((n*n+1)/2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll l=1,r=n*n;
    ll ans;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(count(mid,n)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<ans<<"\n";
}