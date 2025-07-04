#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,q,i,l,r;
    cin>>n>>q;
    vector<ll> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        a[i]+=a[i-1];
    }
    while(q--){
        cin>>l>>r;
        l--,r--;
        if (l == 0){
            cout << a[r] << "\n";
        }else{
            cout<<a[r]-a[l-1]<<"\n";
        }
    }
    return 0;

}