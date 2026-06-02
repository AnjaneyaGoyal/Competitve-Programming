#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        int maxa=0;
        for(ll i=0; i<n; i++) {
            for (ll j=i+1; j<n; j++) {
                ll c =v[i]^v[j];
                if(c>maxa) {
                    maxa = c;
                }
            }
        }
        cout<<maxa<<endl;
    }
}